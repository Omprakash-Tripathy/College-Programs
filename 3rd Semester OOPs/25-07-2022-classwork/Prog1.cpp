#include <iostream>
using namespace std;

class display
{
    public:
    string name;
    
    void output()
    {
        cout << "Hello " << name <<endl;
    }
};

int main ()
{
    display a;
    cout<<"Enter your name: ";
    cin>>a.name;
    a.output();

    return 0;
}