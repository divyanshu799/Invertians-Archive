#include<iostream>
#include<cmath>
using namespace std;
int main(){

    float base, exponent, result;

    cout<<"Enter base and exponent: ";
    cin>>base>>exponent;

    result = pow(base,exponent);

    cout<<base<<" ^ "<<exponent<<" = "<< result<<endl;
    

return 0;
}