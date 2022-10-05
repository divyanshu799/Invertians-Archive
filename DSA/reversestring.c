#include<stdio.h>
int main()
{
    char str[10000];
    printf("Enter The String: ");
    scanf("%[^\n]s",str);
    int i=0;int j=0;int k=0;int n=0;
    while(str[n]!='\0')
    {
        n++;
        while(k<n+1)
        {
            if(str[j]==' '||str[j]=='\0')
            {
                int l=j+1;j=j-1;
                while(i<j)
                {
                    char t=str[i];
                    str[i]=str[j];
                    str[j]=t;
                    i++;j--;
                }
                i=l;j=l;k=l;
            }
            else 
            j++;
        }
    }
    printf("New String Is: \n");
    puts(str);
}