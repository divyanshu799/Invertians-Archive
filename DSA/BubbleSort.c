#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n-1;j++)
    {
        for(int k=0;k<n-j-1;k++)
        {
            if(arr[k]>arr[k+1])
            {
                int temp=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
            }
        }
    }
    for(int l=0;l<n;l++)
    {
        printf("%d ",arr[l]);
    }
return 0;
}