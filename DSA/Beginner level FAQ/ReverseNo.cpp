#include<iostream>
using namespace std;

int main(){
    int n, reverseNumber=0, reminder;

    cout<<"Enter an integer: ";
    cin>>n;

    while(n!=0){
        reminder = n%10;
        reverseNumber = reverseNumber * 10 + reminder;
        n= n/10;
    }
    cout<<"Reversed Number= "<<reverseNumber;

    return 0;
}