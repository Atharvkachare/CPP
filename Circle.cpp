#include<iostream>
using namespace std;
int main(){
    cout<<"\t\tC++ program to count area of a circle and circumference";
    float R, area, Circumference;
    cout<<"Please enter the radious of a circle: ";
    cin>>R;
    if(R>0){
        area =3.4*R*R; 
        Circumference = 2*3.14*R;
        cout<<"Area of a circle is: "<<area<<"; "<<endl;
        cout<<"Circumference of a circle is: "<<Circumference<<";"<<endl;
    }
        else{
            cout<<"Negative number canot be applied !!!"<<endl;
        }
        system("pause");


      return 0;
    }

    
