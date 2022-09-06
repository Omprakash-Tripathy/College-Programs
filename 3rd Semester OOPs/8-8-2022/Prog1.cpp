#include <iostream>
using namespace std;
#define PI 3.1416

float volume(float a)
{
    return a*a*a;
}
float volume(float radius)
{
    return (4.0 / 3.0) * PI * radius * radius * radius;
}
float volume(float radius, float height)
{
    return PI * radius * radius * height;
}

int main()
{
    float cube_a,sphere_r,cylinder_r,cylinder_h;
    cout<<"Enter a of cube: "<<endl;
    cin>>cube_a;
    cout << "Volume of Cube =" << volume(cube_a) << endl;
    cout<<"Enter r of sphere: "<<endl;
    cin>>sphere_r;
    cout << "Volume of Sphere =" << volume(sphere_r) << endl;
    cout<<"Enter r,h of cylinder: "<<endl;
    cin>>cylinder_h>>cylinder_r;
    cout << "Volume of Cylinder =" << volume(cylinder_r, cylinder_h) << endl;
    return 0;
}