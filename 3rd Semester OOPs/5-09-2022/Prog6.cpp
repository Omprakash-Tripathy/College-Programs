//Create a class which stores name, author and price ofa book. Store information for n
//number of books. Display information of all the books in a given price range using
//friend function.

#include<iostream>
using namespace std;

class Book
{
    char name[20], author[20];
    float price;
public:
    void input()
    {
        cout<<"Enter name, author and price: ";
        cin>>name>>author>>price;
    }
    friend void display(Book *, int, float, float);
};

void display(Book *ob, int n, float p1, float p2)
{
    for(int i=0; i<n; i++)
    {
        if(ob[i].price>=p1 && ob[i].price<=p2)
        {
            cout<<"Name: "<<ob[i].name<<endl;
            cout<<"Author: "<<ob[i].author<<endl;
            cout<<"Price: "<<ob[i].price<<endl;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter number of books: ";
    cin>>n;
    Book ob[n];
    for(int i=0; i<n; i++)
        ob[i].input();
    float p1, p2;
    cout<<"Enter price range: ";
    cin>>p1>>p2;
    display(ob, n, p1, p2);
    return 0;
}