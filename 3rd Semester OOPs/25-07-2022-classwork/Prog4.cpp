#include <iostream>
using namespace std;
class comp 
{
    int a[10], b[10];
public:
    void get()
    {
        cout<< "Enter the real and imaginary part: \n\n";
        for(int j=0;j<10;j++)
        {
            cout<<"Complex number"<<j+1<<": ";
            cin>>a[j]>>b[j];
        }
    }
    void disp()
    {
        cout<<"\n Number listing\n";
        for(int j=0;j<10;j++)
        {
            cout<<"\t"<<a[j]<<"+ i"<<b[j]<<endl;
        }
    }
};
int main()
{
    class comp c;
    c.get();
    c.disp();
    return 0;
}