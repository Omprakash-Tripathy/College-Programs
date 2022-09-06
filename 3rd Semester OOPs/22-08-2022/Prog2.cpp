//Create a class distance which stores a distance in feet and inches. Input 2 distance values
//in objects, add them, store the resultant distance in an object and display it.
//[Write the above program in two ways
//a) store the resultant distance in the calling object:C3.add(Cl ,C2)
//b) return the resultant object

#include<iostream>
using namespace std;

class dist
{
    private:
    int feet,inches;
    public:
    void input()
    {
        cout<<"Enter the feet: ";
        cin>>feet;
        cout<<"Enter the inches: ";
        cin>>inches;
    }
    void add(dist d1,dist d2)
    {
        feet=d1.feet+d2.feet;
        inches=d1.inches+d2.inches;
        if(inches>=12)
        {
            feet+=inches/12;
            inches=inches%12;
        }
    }
    void display()
    {
        cout<<"The dist is: "<<feet<<" feet "<<inches<<" inches";
    }
};

int main()
{
    dist d1,d2,d3;
    d1.input();
    d2.input();
    d3.add(d1,d2);
    d3.display();
    return 0;
}