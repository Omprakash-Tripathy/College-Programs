//Create a class which stores employee name,id and salary Derive two classes from
//Employee class: 'Regular' and 'Part-Time'. The 'Regular' class stores DA, EIRA and
//basic salary. The 'Part-Time' class stores the number of hours and pay per hour.
//Calculate the salary ofa regular employee and a par-time employee.

#include <iostream>
#include<string.h>
using namespace std;

class Employee
{
    private:
        char name[20];
        int id;
        float salary;
    public:
        Employee(char n[], int i, float s)
        {
            strcpy(name, n);
            id = i;
            salary = s;
        }
        void display()
        {
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
            cout << "Salary: " << salary << endl;
        }
};

class Regular : public Employee
{
    private:
        float da, eira, basic;
    public:
        Regular(char n[], int i, float s, float d, float e, float b) : Employee(n, i, s)
        {
            da = d;
            eira = e;
            basic = b;
        }
        void display()
        {
            Employee::display();
            cout << "DA: " << da << endl;
            cout << "EIRA: " << eira << endl;
            cout << "Basic: " << basic << endl;
        }
};

class PartTime : public Employee
{
    private:
        int hours;
        float pay;
    public:
        PartTime(char n[], int i, float s, int h, float p) : Employee(n, i, s)
        {
            hours = h;
            pay = p;
        }
        void display()
        {
            Employee::display();
            cout << "Hours: " << hours << endl;
            cout << "Pay: " << pay << endl;
        }
};

int main()
{
    Regular r("John", 1, 10000, 1000, 500, 5000);
    PartTime p("Mary", 2, 5000, 10, 500);
    r.display();
    p.display();
    return 0;
}