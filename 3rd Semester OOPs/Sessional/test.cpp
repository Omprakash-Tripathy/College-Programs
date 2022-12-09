#include<iostream>
using namespace std;

class Employee
{
    int empid;
    char name[100];
    public:
    void input()
    {
        cout<<"Enter the id of the employee";
        cin>>empid;
        cout<<"Enter the Employee name";
        cin>>name;
    }
    void display()
    {
        cout<<"Id of Employee"<<empid<<endl;
        cout<<"name of Employee"<<name<<endl;
    }
};

int main()
{
    Employee *emp[5];
    for(int n=0;n<5;n++)
    {
        emp[n]=new Employee;
        emp[n]->input();
    }
    for(int n=0;n<5;n++)
    {
        emp[n]->display();
    }
    return 0;
}