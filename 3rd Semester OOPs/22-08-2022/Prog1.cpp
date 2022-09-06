//WAP to declare a class with one data member of type integer. Create two objects belonging to that class. Take input through first object and copy that value in second object
// and display the value of second object.
#include<iostream>
using namespace std;
class omp
{
    private:
    int b;
    public:
    void input()
    {
        cout<<"Enter the value: ";
        cin>>b;
    }
    void copy(omp obj)
    {
        b=obj.b;
        cout<<"Copied value: "<<obj.b;
    }

};
int main()
{
    omp obj1,obj2;
    obj1.input();
    obj2.copy(obj1);
    return 0;
}