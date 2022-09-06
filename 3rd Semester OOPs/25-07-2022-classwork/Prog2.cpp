#include <iostream>
using namespace std;

class student
{
    public:
    string name;
    int roll;
    int totalmarks;

    void output()
    {
        cout << "Name :" << name << endl;
        cout << "roll :" << roll << endl;
        cout << "Total marks :" << totalmarks << endl;
    }
};

int main()
{
    student a;
    cout<<"Enter the name of the student: ";
    cin>>a.name;
    cout<<"Enter the Roll Number of the student: ";
    cin>>a.roll;
    cout<<"Enter the marks in the subject: ";
    cin>>a.totalmarks;
    a.output();

    return 0;
}