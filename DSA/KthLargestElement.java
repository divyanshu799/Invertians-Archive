
// Java code for k largest elements in an array
import java.util.Arrays;
import java.util.Collections;

 
class KthLargestElement {
    public static void kthLargest(Integer[] arr, int k)
    {
        // Sort the given array arr in reverse order
        // This method doesn't work with primitive data
        // types. So, instead of int, Integer type
        // array will be used
        Arrays.sort(arr, Collections.reverseOrder());
 
        // Print the first kth largest elements
        return arr[k-1];
    }

    //Driver Code
     public static void main(String[] args)
    {
        Integer arr[] = new Integer[] { 11, 23, 12, 6, 34, 4, 50 };
                                        
        int k = 3;
        System.out.print("K'th largest element is " + kthLargest(arr, k));
    }
}