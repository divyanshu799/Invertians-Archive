// Java program to find middle of linked list
class MiddleOfLinkedList{

    Node head; 
    class Node{
    
        int data;
        Node next;
        Node(int d){
        
            data = d;
            next = null;
        }
    }
 
    //  Function to print middle of linked list 
    void printMiddle(){
    
        //make two pointer slow and fast
        Node slow = head;
        Node fast = head;
         
            while (fast != null && fast.next != null){
            
                fast = fast.next.next;
                slow = slow.next;
            }
            System.out.println("The middle element is [" + slow_ptr.data + "] \n");
                                
         
    }
 
    //  Inserts a new Node at front of the list. 
    public void push(int new_data){
    
        
        Node new_node = new Node(new_data);

        new_node.next = head;
 
        head = new_node;
    }
 
    //  This function prints contents of linked list
    //    starting from  the given node 
    public void printList(){
    
        Node tnode = head;
        while (tnode != null){
        
            System.out.print(tnode.data+" ");
            tnode = tnode.next;
        }
        System.out.println("NULL");
    }
 
   //Driver Code
    public static void main(String [] args){
    
        LinkedList llist = new LinkedList();
        for (int i=5; i>0; --i){
        
            llist.push(i);
            llist.printList();
            llist.printMiddle();
        }
    }
}