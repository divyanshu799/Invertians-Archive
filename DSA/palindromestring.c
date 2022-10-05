#include<stdio.h>
int main()
{
    char str[10000];
    printf("Enter The String: ");
    scanf("%[^\n]s",str);
    int n=0;
    while(str[n]!='\0')
    {
        n++;
    }
    int i=0;
    int j=n-1;
    int flag=1;
    while(i<j)
    {
        if(str[i]==' ')
        i++;
        else if(str[j]==' ')
        j--;
        else if(str[i]!=str[j])
        {
            flag=0;
            break;
        }
        i++;j--;

    }
    if(flag==0)
    printf("The String Is Not Palindrome");
    else
    printf("The String Is Palindrome");
return 0;
}