// Write a cpp progaram to find lenth of a string without using strlen() function;
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    string st = "geeksforgeeks";
    int length = 0;
    for(int i=0; st[i] != '\0'; i++)
    {
        length++;
    }
    cout<<"The length of the string is: "<<length<<endl;

    return 0;
}