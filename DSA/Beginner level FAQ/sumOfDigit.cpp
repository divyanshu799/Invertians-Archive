#include<iostream>
using namespace std;
int main(){

    int n, sum = 0, reminder;

    cout<<"Enter an integer: ";
    cin>>n;

    while(n!=0){
        reminder = n % 10;
        sum = sum + reminder;
        n = n/10;
    }

    cout<<"sum of digit= "<<sum;
    
return 0;
}