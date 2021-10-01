        /*Given an Array. Find the Element between "1" to "n" which is not present 
        in the array*/


 class MissingNumber {

    int findMissingNumber(int array[], int n) {

        //Idea is to take total_sum of elements from 1 to n,
        //then return the difference between total_sum and sum of array elements

        int total = (n*(n+1)) / 2;
        int sum = 0;
        for(int i = 0; i < n-1; i++){
            sum += array[i];
        }
        return (total-sum);
    }
	
    //Driver Code

	public static void main(String[] args) {
		
		int A[] = {6,1,2,8,3,4,7,10,5}
		int N = 10;

        System.out.print("The number which is missing in the given array is " + findMissingNumber(A, N));
	}
}