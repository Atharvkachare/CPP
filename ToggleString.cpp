// Write a program to toggle string 
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str = "GeeksforGeeks";
    for(int i=0; str[i] != '\0'; i++)
    {
        if(islower(str[i])){
           str[i]  = toupper(str[i]);
        }
        else if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }   
    }
     cout<<"Toggle string : "<<str<<endl;
    return 0;
}