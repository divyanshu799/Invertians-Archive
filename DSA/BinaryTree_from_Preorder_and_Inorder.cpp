/*
	Task: To build a Binary Tree
    using Preorder and Inorder traversal
*/

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x)  //constructor
    {
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};

//Used to print the post order of the given binary tree
void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);  //left subtree
	printPostOrder(root->right); //right subtree
	cout<<root->data<<" ";		 //root data
}

//utility function to search an element in the array
int search(int arr[], int n, int ele)
{
    for(int i = 0; i<n; i++)
    {
        if(arr[i] == ele)
            return i;
    }
    return -1;
}

//function to build tree from inorder and preorder traversal
int preindex = 0;
Node* Tree(int in[], int pre[], int n, int start, int end)
{
    if(start<=end)
    {
        int inindex = search(in, n, pre[preindex]);
        Node* temp = new Node(pre[preindex]);
        preindex++;

        temp->left = Tree(in, pre, n, start, inindex-1);
        temp->right = Tree(in, pre, n, inindex+1, end);

        return temp;
    }

    else
        return NULL;
}

int main()
{
    int inorder[] = {1, 6, 8, 7}, preorder[] = {1, 6, 7, 8};
    int n = sizeof(inorder)/ sizeof(inorder[0]);
    Node *root = Tree(inorder, preorder, n, 0, n-1);
    printPostOrder(root);
    cout<< endl;
}