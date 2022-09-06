//WAP to swap private data member of two classes.

#include<iostream>
using namespace std;

class B;
class A
{
    int x;
public:
    void input()
    {
        cin>>x;
    }
    friend void swap(A &, B &);
    void output()
    {
        cout<<x;
    }
};

class B
{
    int y;
public:
    void input()
    {
        cin>>y;
    }
    friend void swap(A &, B &);
    void output()
    {
        cout<<y;
    }
};

void swap(A &ob1, B &ob2)
{
    int flag;
    flag = ob1.x;
    ob1.x = ob2.y;
    ob2.y = flag;
}

int main()
{
    A ob1;
    ob1.input();

    B ob2;
    ob2.input();

    swap(ob1, ob2);

    ob1.output();

    ob2.output();
    return 0;
}