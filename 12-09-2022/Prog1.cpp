//Create a class shape. Derive three classes from it: Circle, Triangle and Rectangle. Include the
//relevant data members and functions in all classes. Find the area of each shape and display it.

#include <iostream>
using namespace std;

class Shape
{
    public:
        virtual void area() = 0;
};

class Circle : public Shape
{
    private:
        float radius;
    public:
        Circle(float r)
        {
            radius = r;
        }
        void area()
        {
            cout << "Area of circle is: " << 3.14 * radius * radius << endl;
        }
};

class Triangle : public Shape
{
    private:
        float base, height;
    public:
        Triangle(float b, float h)
        {
            base = b;
            height = h;
        }
        void area()
        {
            cout << "Area of triangle is: " << 0.5 * base * height << endl;
        }
};

class Rectangle : public Shape
{
    private:
        float length, breadth;
    public:
        Rectangle(float l, float b)
        {
            length = l;
            breadth = b;
        }
        void area()
        {
            cout << "Area of rectangle is: " << length * breadth << endl;
        }
};

int main()
{
    Circle c(5);
    Triangle t(5, 10);
    Rectangle r(5, 10);
    c.area();
    t.area();
    r.area();
    return 0;
}