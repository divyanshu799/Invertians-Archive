

/*
 Given an array of integers nums which is sorted in ascending order, and an integer target,
  write a Program to search target in nums. 
  If target exists, then return its index. Otherwise, Print -1.

You must write an algorithm with O(log n) runtime complexity.


 */



public class BinarySearch {

	public static void main(String[] args) {
		
     //		Lets take and Example array & Target
		
		
		  int nums[]= {-1,0,3,5,9,12,-11,20,33,54,77,92};
		  int target=9;
		
		
		  int l=0,h=nums.length-1;
		    
	        while(l<=h){
	        int mid=l+(h-l)/2;
	            
	            if(nums[mid]==target) {
	                System.out.println("Index of the Target is: "+mid); 
	                   return;
	            }
	            
	            if(nums[mid]>target)
	                h=mid-1;
	            else
	                l=mid+1;
	            
	        }
	        
	        
	        System.out.println(-1);
	        
	  
		
		
		
		

	}

}
