//WAP to overload the add function and perform the following operations
//1. Add two integer
//2. Add two complex number
//3. Concatenate two strings

#include<iostream>
using namespace std;

class real
{
    private:
    int a,b,c;
    public:
    void input()
    {
        cout<<"Enter the first number: ";
        cin>>a;
        cout<<"Enter the second number: ";
        cin>>b;
    }
    void add()
    {
        c=a+b;
        cout<<"The sum is: "<<c<<endl;
    }
    void display()
    {
        cout<<"The sum of two numbers is: "<<c<<endl;
    }
};

class complex
{
    private:
    int real,img;
    public:
    void input()
    {
        cout<<"Enter the real part: ";
        cin>>real;
        cout<<"Enter the imaginary part: ";
        cin>>img;
    }
    void display1()
    {
        cout<<"The real part is: "<<real<<endl;
        cout<<"The imaginary part is: "<<img<<endl;
    }
    complex add(complex c1,complex c2)
    {
        complex c3;
        c3.real=c1.real+c2.real;
        c3.img=c1.img+c2.img;
        cout<<"The sum of two complex numbers is: "<<c3.real<<"+"<<c3.img<<"i"<<endl;
    }
    string concat(string s1,string s2)
    {
        string s3;
        s3=s1+s2;
        return s3;
    }
};

int main()
{
    real r1;
    complex c1,c2;
    r1.input();
    r1.add();
    r1.display();
    c1.input();
    c2.input();
    complex c3=c1.add(c1,c2);
    string s1,s2;
    cout<<"Enter the first string: ";
    cin>>s1;
    cout<<"Enter the second string: ";
    cin>>s2;
    string s3=c1.concat(s1,s2);
    cout<<"The concatenated string is: "<<s3<<endl;
    return 0;
}