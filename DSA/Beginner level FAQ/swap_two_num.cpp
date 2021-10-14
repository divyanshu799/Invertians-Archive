#include<iostream>
using namespace std;

int main(){

    int temp;
    int a=5, b=6;

    cout<<"before swapping: "<<endl;
    cout<<"a = "<<a<<" "<<"b = "<<b<<endl;

    temp = a;
    a = b;
    b = temp;

    cout<<"After swapping: "<<endl;
    cout<<"a = "<<a<<" "<<"b = "<<b<<endl;

    return 0;
}


// Without using 3rd variable...

// a = a + b;
// b = a - b;
// b = a - b;