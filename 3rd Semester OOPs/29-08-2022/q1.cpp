/*WAP to overload the add function to perform the following operations:
1. Add two integers
2. Add two complex numbers
3. Concatenate two strings
*/
#include <iostream>
#include <string>
using namespace std;
class Addition
{
    private:
    int a,b,re1,im1,re2,im2;
    string s1, s2;
    public:
    void add(int a, int b)
    {
        cout<<a+b<<endl;
    }
    void add(int re1, int im1, int re2, int im2)
    {
        cout<<re1+re2<<" + "<<im1+im2<<"i"<<endl;
    }
    void add(string s1, string s2)
    {
        string s = s1+s2;
        cout<<s<<endl;
    }
    void input()
    {
        cout<<"Enter 2 integers: ";
        cin>>a>>b;
        cout<<"Enter 2 complex numbers: ";
        cin>>re1>>im1>>re2>>im2;
        cout<<"Enter 2 strings: ";
        cin>>s1;
        cin>>s2;
    }
    void display()
    {
        cout<<"Addition of two integers : ";
        add(a,b);
        cout<<"Addition of 2 complex numbers : ";
        add(re1,im1,re2,im2);
        cout<<"Concatenating 2 strings: ";
        add(s1,s2);
    }
};
int main()
{
    Addition obj;
    obj.input();
    obj.display();
    return 0;
}