// Print pascal tringle.


#include<iostream>
using namespace std;

int main(){
    int n,i,j,k;

    cout<<"Enter a no: ";
    cin>>n;

    for( i = 1; i<=n; i++){
        int coef = 1; // cofficient
        for(k =n-i; k>0; k--){
            cout<<" ";
        }
        for(j=1; j<=i; j++){
            cout<<coef<<" ";
            coef=coef*(i-j)/j;
        }
        cout<<endl;
    }
    return 0;
}