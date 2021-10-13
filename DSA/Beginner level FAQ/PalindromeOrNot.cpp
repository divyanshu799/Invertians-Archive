#include<iostream>
using namespace std;

int main(){

    int n, num, rev=0, digit;

    cout<<"enter a no: ";
    cin>>num;
    n=num;
    
    do
    {
        digit = num %10;
        rev = (rev *10) + digit;
        num = num/10;
    }while(num!=0);

    cout<<"The reverse no is : "<<rev<<endl;

    if(n==rev)
        cout<<"The no is pallindrome.";
    else 
        cout<<"The no is not pallindrome";
    

    return 0;
}