/*WAP to design a class Number having two integer data members and two member functions.
Data members may be integer or float.
1. getdata()
2. showdata()
Perform arithmetic operations (add/substract) using function overloading concept.
*/
#include <iostream>
using namespace std;
class Number
{
    private:
    int a, b;
    float f1, f2;
    public:
    void getdata()
    {
        cout<<"Enter 2 integers : "<<endl;
        cin>>a>>b;
        cout<<"Enter 2 float numbers : "<<endl;
        cin>>f1>>f2;
    }
    void showdata()
    {
        cout<<"Addition of two integers is : ";
        add(a,b);
        cout<<"Subtraction of two integers is: ";
        subtract(a,b);
        cout<<"Addition of two float numbers is: ";
        add(f1, f2);
        cout<<"Subtraction of two float numbers is: ";
        subtract(f1,f2);
    }
    void add(int a, int b)
    {
        cout<<a+b<<endl;
    }
    void add(float f1, float f2)
    {
        cout<<f1+f2<<endl;
    }
    void subtract(int a, int b)
    {
        cout<<a-b<<endl;
    }
    void subtract(float f1, float f2)
    {
        cout<<f1-f2<<endl;
    }
};
main()
{
    Number ob;
    ob.getdata();
    ob.showdata();
}