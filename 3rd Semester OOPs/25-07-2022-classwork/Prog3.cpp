#include <iostream>
using namespace std;

class student 
{
    string name;
    int roll;
    int marks[5];
    int tmarks;
    int percent;

    public:
    void input()
    {
        cout << "Enter name of the student: " <<endl;
        cin >> name;
        cout << "Enter roll number of the student: " <<endl;
        cin >> roll;
        tmarks=0;
        cout << "Enter the of the student in 5 subjects: " <<endl;
        for(int i=0; i<5; i++)
        {
            cin>>marks[i];
            tmarks = tmarks + marks[i];
        }
        percent = (tmarks* 100)/500;
    }

    void output()
    {
        cout << "\nNAME : " << name << endl;
        cout << "ROLL : " << roll << endl;
        cout << "MARKS:" << endl;
        for(int i =0; i<5; i++)
        {
            cout << "\tsubject " << i+1 << ": " << marks[i] << endl;
        }
        cout << "\nTotal marks secured : " << tmarks << endl;
        cout << "Aggregate Percentage : " << percent << " %\n" << endl;
    }

};

int main()
{
    student a;
    a.input();
    a.output();
    return 0;
}