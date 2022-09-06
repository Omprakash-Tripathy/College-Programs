#include <iostream>
using namespace std;

class student
{
    private:
    string  name;
    int roll;
    int marks[6];
    int total;
    

    public:

    void input()
    {
        cout <<"Enter the Name of the student : ";
        cin >> name;
        cout <<"Enter the Roll Number : ";
        cin >> roll;
        cout <<"Enter the Marks in each subject :\n";
        for(int i=0; i<6; i++)
        {
            cout << "\tSubject_" << i+1 << " : ";
            cin >> marks[i]; 
        }
    }

    int totMarks;
    void total_()
    {
        total = 0;
         for(int i=0; i<6; i++)
        {
            total = total + marks[i];  
        }
        cout << "\nTOTAL : " << total <<endl;
        totMarks = (total*100)/600 ;
    }

    void grade()
    {
        if(totMarks>=91 && totMarks<=100)
        {
            cout << "The Grade is O";
        }
        if(totMarks>=81 && totMarks<=90)
        {
            cout << "The Grade is E";
        }
        if(totMarks>=71 && totMarks<=80)
        {
            cout << "The Grade is A";
        }
        if(totMarks>=61 && totMarks<=70)
        {
            cout << "The Grade is B";
        }
        if(totMarks>=51 && totMarks<=60)
        {
            cout << "The Grade is C";
        }
        if(totMarks>=41 && totMarks<=50)
        {
            cout << "The Grade is D";
        }
        if(totMarks<=40)
        {
            cout << "The Grade is f";
        }

    }
};

int main()
{
    student s1;
    s1.input();
    s1.total_();
    s1.grade();
}