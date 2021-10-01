//https://leetcode.com/problems/shuffle-the-array/

class Solution {
    public int[] shuffle(int[] nums, int n) {
        
        int[] arr1 = new int[n],arr2 = new int[n];
        
        for(int i=0;i<n;++i ){
            
            arr1[i] = nums[i];
            arr2[i] = nums[n+i];
            
        }

        for(int i=0;i<n;++i ){
            
            nums[i*2] = arr1[i];
            nums[i*2+1] = arr2[i];
            
        }
        
        return nums;
        
    }
}