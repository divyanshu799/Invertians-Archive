// find the middle of a linked list 
 // the code is wriiten with some explantion in c++ language.
// hope it helps ;
#include<iostream>
using namespace std;
class node{
    public:
int data;
node *next;//yaha address store karvana tha toh aysy likha
node(int data){
    this->data=data;
    next=NULL;
}
};
node  *middlenode(node *head){
    node *slow=head;
    node *fast=head->next;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    if(fast!=NULL){
        return slow->next;
    }
    return slow;
}

int main(){
    node n1(81);
    node n2(27);
    node n3(56);
    node *head=&n1;// this head is storing the address of first link list component so that we can access the whole link list through this
    n1.next=&n2;
    n2.next=&n3;// this is storing address jaha pehle null stored tha
    
    cout<<"the middle element is "<<middlenode(head)->data;
   

    return 0;


}
