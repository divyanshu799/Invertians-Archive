/*Java Code to check if the given linkedlist is palindrome or not. */

/*Algo:---Get the middle of the linked list. 
        Reverse the second half of the linked list. 
        Check if the first half and second half are identical.  */

class CheckIfLinkedListIsPalindrome {
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

    /* Given a reference to the head of a list, Find the mid node. */

    private static Node findMidElement(Node head) {
		Node first = head;
		Node second = head;
		
		while(first != null && first.next != null) {
			second = second.next;
			first = first.next.next;
		}
		
		return second;
    }
    /*Function to reverse the list */

     public static Node Reverse(Node head) {
		Node after=null;
		Node prev = null;
		Node temp = head;
			
			while(temp != null) {
				after = temp.next;
				temp.next = prev;
				prev = temp;
				temp = after;
			}
			head = prev;
			
			return head;
		}
	//Function to check whether the list is palindrome.
    public static boolean isPalindrome(Node head) 
    {
		if(head == null){
		    return false;
		}
        Node mid = findMidElement(head); 
		Node last = Reverse(mid); 
	    Node curr = head;
	    
	    
	    while(last != null){
	        if(last.data != curr.data){
	            return false;
	        }
	        last = last.next;
	        curr = curr.next;
	    }
	    return true;
		
    }    
    
   
 
    //Driver Code
	public static void main(String[] args)
	{
		LinkedList list = new LinkedList();

		//Constructing the list
		list.push(4);
		list.push(1);
		list.push(5);
		list.push(1);
		list.push(4);

        if (list.isPalindrome(list.head) != false) {
            System.out.println("Is Palindrome");
            
        }
        else {
            System.out.println("Not Palindrome");
            
        }

	}
}