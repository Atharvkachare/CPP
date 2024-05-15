#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    char ch;
    ch ='a';
    if(isalpha(ch))
    {
        cout<<"Character is alphabet";
    }
    else{
        cout<<"Character is not alhabet";
    }
    return 0;
}