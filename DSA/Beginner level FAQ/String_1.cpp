#include<iostream>
using namespace std;

string changeLetter(string str)
{
    int char_code;

    for(int i = 0; i<=str.length(); i++)
    {
        char_code = int(str[i]);

        if (char_code == 122)
        {
            str[i] = char(97);
        }
        else if (char_code == 65)
        {
            str[i] = char(90);

        }

        else if( char_code >= 65 && char_code <= 90 || char_code>= 97 && char_code <= 122)
        {
            str[i] = char(char_code + 1);
        }
    }

    return str;
}
int main()
    {
        cout<<"Original String: W3resorse";
        cout<<"\nNew String: "<< changeLetter("w3resorse");
        
    }