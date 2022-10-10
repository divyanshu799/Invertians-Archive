#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    printf("Enter The First String: ");
    gets(s1);
    printf("Enter The Second String: ");
    gets(s2);
    int freq1[26]={0},freq2[26]={0},i=0,j=0,flag=1;
    while(s1[i]!='\0')
    {
        if(s1[i]!=' ')
           freq1[s1[i]-'a']++;
        i++;
    }
    while(s2[j]!='\0')
    {
        if(s2[j]!=' ')
           freq2[s2[j]-'a']++;
        j++;
    }
    for(int i=0;i<26;i++)
    {
        if(freq1[i]!=freq2[i])
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    printf("The Given Two Strings Are Not Anagrams");
    else
    printf("The Given Two Strings Are Anagrams");
return 0;
}