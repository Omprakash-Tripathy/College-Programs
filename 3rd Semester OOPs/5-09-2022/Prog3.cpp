//create two classes which stores distance in feet,inches and meter, centimeter format respectively. Write a function
//which compares distance in object of these classes and displays the larger one.

#include<iostream>
using namespace std;

class Distance2;
class Distance1
{
    int feet, inches;
    public:
        void getdata()
        {
            cout<<"Enter distance in feet and inches: ";
            cin>>feet>>inches;
        }
        void display()
        {
            cout<<"Distance in feet and inches: "<<feet<<" "<<inches<<endl;
        }
        friend void compare(Distance1, Distance2);
};

class Distance2
{
    int meter, centimeter;
    public:
        void getdata()
        {
            cout<<"Enter distance in meter and centimeter: ";
            cin>>meter>>centimeter;
        }
        void display()
        {
            cout<<"Distance in meter and centimeter: "<<meter<<" "<<centimeter<<endl;
        }
        friend void compare(Distance1, Distance2);
};

void compare(Distance1 d1, Distance2 d2)
{
    if(d1.feet>d2.meter)
        d1.display();
    else
        d2.display();
}

int main()
{
    Distance1 d1;
    Distance2 d2;
    d1.getdata();
    d2.getdata();
    compare(d1, d2);
    return 0;
}