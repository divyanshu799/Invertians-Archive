/*Java Code for delete a LinkedList Node without HeadPointer */


class DeleteNodeOfLinkedListWithoutHeadPointer {
	Node head;

	class Node {
		int data;
		Node next;
		Node(int d)
		{
			data = d;
			next = null;
		}
	}

	/* Given a reference to the head of a list and an int, inserts a new Node on the front of the list. */
		
	public void push(int new_data)
	{
		
		Node new_Node = new Node(new_data);
		new_Node.next = head;
		head = new_Node;
	}

	/* This function prints contents of linked list starting from the given Node */
		
	public void printList()
	{
		Node tNode = head;
		while (tNode != null) {
			System.out.print(tNode.data + " ");
			tNode = tNode.next;
		}
	}

	public void deleteNode(Node del)
	{
	    //storing the node next to given node in a pointer.
		Node temp = del.next;
		
		//copying the data of pointer in the given current node.
		del.data = temp.data;
		
		//storing the next node to pointer in link part of current node.
		del.next = temp.next;
		
		// freeing memory.
		temp = null;
	}
    
    //Driver Code
	public static void main(String[] args)
	{
		LinkedList list = new LinkedList();

		//Constructing the list
		list.push(30);
		list.push(4);
		list.push(13);
		list.push(12);
		list.push(19);

		System.out.println("Before deleting");
		list.printList();

		list.deleteNode(list.head);
            

		System.out.println("After Deleting");
		list.printList();
	}
}
