#include<iostream>
using namespace std;
int main(){

    int a, b, c;

    cout<<"Enter a no:"<<endl;
    cin>>a>>b>>c;

    if((a>=b)&&(a>=c))
        cout<<a<<" is largest no.";
    else if((b>=c)&&(b>=a))
        cout<<b<<" is largest no.";
    else
        cout<<c<<" is largest no.";
    
    
    return 0;
}