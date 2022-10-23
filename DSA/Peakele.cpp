class Solution {
public:
    int findPeakElement(vector<int>& arr) 
    {
       int  n=arr.size();
        if(n==1)
            return 0;
        else if(n==2)
        {
            int x=arr[0]>arr[1]?0:1;
            return x;
        }
        else{
            if(arr[0]>arr[1])
                return 0;
            if(arr[n-1]>arr[n-2])
                return n-1;
         }
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
                return i;
        }
        return -1;
    }
};