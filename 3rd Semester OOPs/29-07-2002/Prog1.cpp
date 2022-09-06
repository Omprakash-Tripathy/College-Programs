// WAP to find out area of a triangle . Enter the base and height of triangle and calculate the area using class and object.

#include <iostream>
using namespace std;

class Triangle
{
private:
    int a, b;

public:
    
   double findarea(int *a, int *b)
    {
       float area;
        int x = *a;
        int y = *b;
       
        area = (0.5 * x * y);
        return area;
    }
};

int main()
{
    Triangle ob;
    int c;
    int d;
    cout << "Enter the base : ";
    cin >> c;
    cout << "Enter the height : ";
    cin >> d;
 

        cout<<ob.findarea(&c, &d);

   

    return 0;
}