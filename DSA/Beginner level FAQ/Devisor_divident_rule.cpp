#include<iostream>
using namespace std;

int main(){
    int divisor, dividend, quotient, reminder;

    cout<<"Enter devidend: ";
    cin>>dividend;

    cout<<"Enter Devisor: ";
    cin>>divisor;


    quotient = dividend/divisor;
    reminder = dividend % divisor;

    cout<< "Quetient is: "<< quotient<<endl;
    cout<< "Reminder is: "<< reminder<<endl;

    return 0;

}