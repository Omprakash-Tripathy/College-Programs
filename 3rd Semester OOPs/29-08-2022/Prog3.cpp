//Write a program in cpp to design a class prime having integer array as a data member.
//Use appropriate member function to read the data, to display data and display number of prime elements in the array.

#include<iostream>
using namespace std;

class prime
{
    private:
    int a[100],n,i,j,count;
    public:
    void input()
    {
        cout<<"Enter the number of elements: ";
        cin>>n;
        for(i=0;i<n;i++)
        {
            cout<<"Enter the element "<<i+1<<": ";
            cin>>a[i];
        }
    }
    void display()
    {
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    void display1()
    {
        cout<<"The number of prime elements in the array is: "<<count<<endl;
    }
    void prime1()
    {
        count=0;
        for(i=0;i<n;i++)
        {
            for(j=2;j<a[i];j++)
            {
                if(a[i]%j==0)
                {
                    break;
                }
            }
            if(j==a[i])
            {
                count++;
            }
        }
    }
};

int main()
{
    prime p;
    p.input();
    p.display();
    p.prime1();
    p.display1();
    return 0;
}