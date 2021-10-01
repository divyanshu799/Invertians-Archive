



        /*Given an Array. Find the Majority Element in the Array.
         
         Majority Element is the Element which occurs More than N/2 times,
          where N is the length of the array.
          
          */



public class FindMajorityElement {

	public static void main(String[] args) {
		
       //	Let's Take an Array for Example
		
		int arr[]= {16,8,9,8,5,8,8,9,8};
		
		int count=1;
		int majE=arr[0];
		int max=0;
		
		for(int i=1;i<arr.length;i++) {
		     if(arr[i]!=majE) {
			 count--;
			} else {
				count++;
			}
			
			if(count==0) {
				count=1;
				majE=arr[i];
			}
	}
		
		 for(int i=0;i<arr.length;i++){
		       if(arr[i]==majE)
		           max++;
		       
		   }
		   
		   System.out.println("Majority Element is "+(max<=(arr.length/2)?-1:majE));
		
		
		


	}

}
