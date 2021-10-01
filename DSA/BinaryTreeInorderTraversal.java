
                          // Print the Binary Tree Inorder Traversal
import java.util.*;

public class BinaryTreeInorderTraversal {

	static ArrayList<Integer> arr=new ArrayList<>();
	
	public static void main(String[] args) {
		
		TreeNode root=createBinaryTree();
		  traverse(root);
         System.out.println(arr);

	
	}
	
	static TreeNode createBinaryTree() {
		
		TreeNode a=new TreeNode(1);
		
		TreeNode b=new TreeNode(2);
		TreeNode c=new TreeNode(3);
		a.left=b;
		a.right=c;
		
		TreeNode d=new TreeNode(4);
		TreeNode e=new TreeNode(5);
		TreeNode f=new TreeNode(6);
		TreeNode g=new TreeNode(7);
		b.left=d;
		b.right=e;
		c.left=f;
		c.right=g;
		
		return a;
		
	}
	
	static void traverse(TreeNode root) {
		if(root==null)
			return;
		traverse(root.left);
		arr.add(root.value);
		traverse(root.right);
		
		
	}
	
	

}

class TreeNode{
	int value;
	TreeNode left;
	TreeNode right;
	
	TreeNode(int x){
		this.value=x;
	}
}
