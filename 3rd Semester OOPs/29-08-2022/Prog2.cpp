//Design a class number having two integer data member and two member function, getdata, and setdata
//perfrom arithmetic operations add, subtract, multiply, divide using function overloading concept.

#include<iostream>
using namespace std;

class number
{
    private:
    int a,b;
    public:
    void getdata()
    {
        cout<<"Enter the first number: ";
        cin>>a;
        cout<<"Enter the second number: ";
        cin>>b;
    }
    void setdata()
    {
        cout<<"The first number is: "<<a<<endl;
        cout<<"The second number is: "<<b<<endl;
    }
    number add(number n1,number n2)
    {
        number n3;
        n3.a=n1.a+n2.a;
        n3.b=n1.b+n2.b;
        return n3;
        cout<<"The sum of two numbers is: "<<n3.a<<"+"<<n3.b<<"i"<<endl;
    }
    number subtract(number n1,number n2)
    {
        number n3;
        n3.a=n1.a-n2.a;
        n3.b=n1.b-n2.b;
        return n3;
        cout<<"The difference of two numbers is: "<<n3.a<<"-"<<n3.b<<"i"<<endl;
    }
    number multiply(number n1,number n2)
    {
        number n3;
        n3.a=n1.a*n2.a;
        n3.b=n1.b*n2.b;
        return n3;
        cout<<"The product of two numbers is: "<<n3.a<<"*"<<n3.b<<"i"<<endl;
    }
    number divide(number n1,number n2)
    {
        number n3;
        n3.a=n1.a/n2.a;
        n3.b=n1.b/n2.b;
        return n3;
        cout<<"The quotient of two numbers is: "<<n3.a<<"/"<<n3.b<<"i"<<endl;
        cout<<"The remainder of two numbers is: "<<n3.a%n3.b<<endl;
    }
};

int main()
{
    number n1,n2,n3;
    n1.getdata();
    n2.getdata();
    n3=n1.add(n1,n2);
    n3.setdata();
    n3=n1.subtract(n1,n2);
    n3.setdata();
    n3=n1.multiply(n1,n2);
    n3.setdata();
    n3=n1.divide(n1,n2);
    n3.setdata();
    return 0;
}