#include<iostream>
using namespace std;
int main(){

    char c;
    bool isUppercaseVowel, isLowercaseVowel;

    cout<<"Enter a Charater: ";
    cin>>c;

    isLowercaseVowel= (c=='i'|| c=='a'|| c=='e'|| c=='o'|| c=='u');
    isUppercaseVowel= (c=='I'|| c=='A'|| c=='E'|| c=='O'|| c=='U');

    if(!isalpha(c)){
        cout<<"Error! Not a Alphabatic character.";
    }else if(isLowercaseVowel || isUppercaseVowel) {
        cout<<c << " is vowel";
    }else{
        cout<<c<<" is consonant";
    }
    cout<<endl;


return 0;
}