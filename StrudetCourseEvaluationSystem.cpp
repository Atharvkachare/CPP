#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
    string student_id;
    string student_name;
    double oop2_Score;
    double math_Score;
    double english_Score;
    double total_Score;
    double ctotal(){
        total_Score = oop2_Score+math_Score+english_Score;
        return total_Score;
    }
    public:
    void TakeData(){
        cout<<"ID : ";
        cin>>student_id;
        cout<<" Student Name : ";
        cin>>student_name;
        cout<<"OOP2 : ";
        cin>>oop2_Score;
        cout<<"Math score : ";
        cin>>math_Score;
        cout<<"English Score : ";
        cin>>english_Score;
        ctotal();
    }

    void showData(){
        cout<<"ID: "<<student_id<<endl;
        cout<<"Name: "<<student_name<<endl;
        cout<<"OOP2: "<<oop2_Score<<endl;
        cout<<"Math: "<<math_Score<<endl;
        cout<<"English: "<<english_Score<<endl;
        cout<<"Total Score: "<<total_Score<<endl;
    }

};

class Employee{
    private:
    string Employee_ID;
    string Employee_Name;
    int Hours;
    int Rate;

    public:
    void setEmployee_ID(string x)
    {
        Employee_ID = x;
    }
    string getEmployee_ID()
    {
        return Employee_ID;
    }
    void setEmployee_Name(string y)
    {
        Employee_Name = y;
    }
    string getEmployee_Name()
    {
       return Employee_Name;
    }
    void setHours(int z)
    {
        Hours = z;
    }
    int getHours()
    {
        return Hours;
    }
    void setRate(int i)
    {
        Rate =i;
    }
    int getRate()
    {
        return Rate;
    }
    double total_Salary(){
        int total;
        total = Hours * Rate;
        return total;
    }

};

int main()
{
    int choice;
    cout<<"1. Student"<<endl;
    cout<<"2. Employee"<<endl;
    cout<<"3. Your choice"<<endl;
    cin>>choice;
    cout<<endl;

    Student student; //Creating object of the stuent class
    Employee employee; //Creating object of the employee class
    switch(choice){
        case 1:
        {
                 student.TakeData();
                 cout<<endl;
                 student.showData();
    }
    break;
    case 2:
    {
         while(true)
         {
            system("cls");
            int choice_employee;
            cout<<"1. Input Employee Details\n";
            cout<<"2. Display Emplyee Details\n";
            cout<<"3. Display Salary\n";
            cin>>choice_employee;

            switch(choice_employee)
            {
                case 1:
                {
                    string x,y;
                    int z,i;
                    system("cls");
                    cout<<"\t\t\tEmployee information\n";
                    cout<<"Employee_ID: ";
                    cin>>x;
                    cout<<"EMployee Name: ";
                    cin>>y;
                    cout<<"Number of worked hours: ";
                    cin>>z;
                    cout<<"Rate per Hour";
                    cin>>i;
                    cout<<endl;

                    employee.setEmployee_ID(x);
                    employee.setEmployee_Name(y);
                    employee.setHours(z);
                    employee.setRate(i);
                    system("paue");

                }
                break;

                case 2:
                {
                    system("cls");
                    cout<<"ID: "<<employee.getEmployee_ID()<<endl;
                    cout<<"Name: "<<employee.getEmployee_Name()<<endl;
                    cout<<"Hours: "<<employee.getHours()<<endl;
                    cout<<"Rate: "<<employee.getRate()<<endl;
                    system("pause");
                }
                break;
                case 3:
                {
                    system("cls");
                    cout<<"Total salary: "<<employee.total_Salary()<<endl;
                    system("pause");
                }
                break;
                default:
                        cout<<"Incorrect input! Try again!"<<endl;
                        system("pause");
            }
        }
    }
    break;
    default:
           cout<<"Incorrect Input! Try again!"<<endl;
        break;
    }
    system("pause");   
    return 0;

}
