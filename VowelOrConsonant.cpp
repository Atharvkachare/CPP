#include<iostream>
using namespace std;
int main()
{
    char ch ='e';
    if(isalpha(ch))
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch =='I' || ch=='O' || ch=='U'){
            cout<<ch<<" is a Vowel"<<endl;
        }
        else{
            cout<<ch<<" is a consonant";

        }
       
    }
     else{
            cout<<ch<<" is not an alphabel"<<endl;
        }
    return 0;
}