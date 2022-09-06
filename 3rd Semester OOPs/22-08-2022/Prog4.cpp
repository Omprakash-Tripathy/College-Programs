//Create a class sport to store player information like name, id, number of century and age(DD/MM/YYYY).
//Use appropriate member fucntion to perform the following operations:
//1. Initialize a data member.
//2. Display all players information in tabular form.
//3. Display the name of the players that starts with the alphabet A.
//4. Display the name whose middle name is kumar.
//5. Display the players id who has scored maximum centuries.

#include<iostream>
using namespace std;

class sport
{
    private:
    char name[20];
    int id,century,y_age,m_age,d_age;
    public:
    void input()
    {
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the id: ";
        cin>>id;
        cout<<"Enter the number of centuries: ";
        cin>>century;
        cout<<"Enter the Year: ";
        cin>>y_age;
        cout<<"Enter the Month: ";
        cin>>m_age;
        cout<<"Enter the Day: ";
        cin>>d_age;
    }
    void display()
    {
        cout<<"The name is: "<<name<<endl;
        cout<<"The id is: "<<id<<endl;
        cout<<"The number of centuries is: "<<century<<endl;
        cout<<"The age is: "<<d_age<<"/"<<m_age<<"/"<<y_age<<endl;
    }
    void displayA()
    {
        if(name[0]=='A')
        {
            cout<<"The name is: "<<name<<endl;
        }
    }
    void displayK()
    {
        if(name[4]=='k')
        {
            cout<<"The name is: "<<name<<endl;
        }
    }
    void displayC()
    {
        if(century==max)
        {
            cout<<"The name is: "<<name<<endl;
        }
    }
};

int main()
{
    int n;
    cout<<"Enter the number of players: ";
    cin>>n;
    sport s[n];
    for(int i=0;i<n;i++)
    {
        s[i].input();
    }
    for(int i=0;i<n;i++)
    {
        s[i].display();
    }
    for(int i=0;i<n;i++)
    {
        s[i].displayA();
    }
    for(int i=0;i<n;i++)
    {
        s[i].displayK();
    }
    for(int i=0;i<n;i++)
    {
        s[i].displayC();
    }
    return 0;
}