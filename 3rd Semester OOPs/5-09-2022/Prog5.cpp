//Create a class which stores name, roll number and total marks for a student. Input data for
//n students- Find the average marks scored by n students, store it as a data member of
//the class and display it using a function which may be called without object.

#include<iostream>
using namespace std;

class Student
{
    char name[20];
    int roll;
    float marks;
    static float avg;
    static int count;
public:
    void input()
    {
        cout<<"Enter name, roll number and marks: ";
        cin>>name>>roll>>marks;
        avg += marks;
        count++;
    }
    static void display()
    {
        cout<<"Average marks: "<<avg/count<<endl;
    }
};

float Student::avg = 0;
int Student::count = 0;

int main()
{
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    Student ob[n];
    for(int i=0; i<n; i++)
        ob[i].input();
    Student::display();
    return 0;
}