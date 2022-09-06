//Create a class which stores id, name, age and basic salary of an employee. Input data for
//n number Of employees. Calculate the gross salary Of all the employees and display it
//along with all other details in a tabular form.
//[Gross salary— Basic salary + DA + HRA]

#include<iostream>
using namespace std;

class emp
{
    private:
    int id,age;
    char name[20];
    float basic,da,hra,gross;
    public:
    void input()
    {
        cout<<"Enter the id: ";
        cin>>id;
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the age: ";
        cin>>age;
        cout<<"Enter the basic: ";
        cin>>basic;
        da=basic*0.1;
        hra=basic*0.2;
        gross=basic+da+hra;
    }
    void display()
    {
        cout<<"The id is: "<<id<<endl;
        cout<<"The name is: "<<name<<endl;
        cout<<"The age is: "<<age<<endl;
        cout<<"The basic is: "<<basic<<endl;
        cout<<"The da is: "<<da<<endl;
        cout<<"The hra is: "<<hra<<endl;
        cout<<"The gross is: "<<gross<<endl;
    }
};

int main()
{
    int n;
    cout<<"Enter the number of employees: ";
    cin>>n;
    emp e[n];
    for(int i=0;i<n;i++)
    {
        e[i].input();
    }
    for(int i=0;i<n;i++)
    {
        e[i].display();
    }
    return 0;
}