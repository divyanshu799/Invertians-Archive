/*Given an array arr of n elements which is first increasing and then may be decreasing,
 find the Bitonic point in the array.*/

import java.util.Arrays;
 class BitonicPoint {

    // Function to return bitonic point
    // in a given array
	public static int findBitonic(int[] arr, int n) {

        //sort the array in increasing order
		 Arrays.sort(arr);
		 
         //return max element
         return arr[n-1];
        
    }
	
	public static void main(String[] args) {
		
		
		int arr[] = {1,15,25,45,42,21,17,12,11};
        int n = arr.length;
        System.out.print("Bitonic point for the given array is " + findBitonic(arr, n));
	}
}