//Create a class employee with data members: empid and name. Include two member functions to input and output the corresponding
//values of the above data members. Access members of employee class using array of pointers to objects

#include<iostream>
using namespace std;

class Employee
{
    int empid;
    char name[20];
    public:
    void input()
    {
        cout<<"Enter Employee ID : ";
        cin>>empid;
        cout<<"Enter Name of Employee : ";
        cin>>name;
    }
    void output()
    {
        cout<<"Employee ID: "<<empid<<endl;
        cout<<"Employee Name: "<<name<<endl;
    }
};

int main()
{
    int n;
    cout<<"Enter the number of employees : ";
    cin>>n;
    Employee *e[n];
    for(int i=0;i<n;i++)
    {
        e[i]=new Employee;
        e[i]->input();
    }
    for(int i=0;i<n;i++)
    {
        e[i]->output();
    }
    return 0;
}