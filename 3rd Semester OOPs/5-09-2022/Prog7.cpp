#include <iostream>
using namespace std;
class complex
{
    int real, img;

public:
    complex()
    {
        real = 10;
        img = 6;
    }
    complex(int a, int b)
    {
        real = a;
        img = b;
    }
    complex(const complex &x, const complex &y)
    {
        real = x.real;
        img = y.img;
    }
    void display()
    {
        cout << "The number is:\n";
        cout << real << "+" << img << "i" << endl;
    }
    ~complex()
    {
        cout << "Destructor called" << endl;
    }
};
int main()
{
    complex c1;
    c1.display();
    complex c2(12, 8);
    c2.display();
    complex c3(c1);
    c3.display();
    complex c4(c2);
    c4.display();
    return 0;
}