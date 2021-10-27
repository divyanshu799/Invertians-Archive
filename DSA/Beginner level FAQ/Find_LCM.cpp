#include<iostream>
using namespace std;
int main(){
    int n1,n2,max;
    cout<<"Enter two postitive integer: ";
    cin>>n1>>n2;

    max = (n1>n2)? n1: n2;

    while(true){
        if(max%n1==0 && max%n2==0){
            cout<<"LCM of "<<n1<<" and "<<n2<<" is "<<max;
            break;
        }
        ++max;
    }


return 0;
}