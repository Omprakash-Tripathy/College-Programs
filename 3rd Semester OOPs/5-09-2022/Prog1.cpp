#include<iostream>
using namespace std;

class num
{
    int n;
    public:
    num(){}
    num(int k)
    {
        n=k;
    }
    num(num &j)
    {
        n=j.n;
    }
    void output()
    {
        cout<<n<<endl;
    }
};

main()
{
    num ob(10);
    num ob1(ob);
    num ob3;
    num ob4=ob1;
    ob.output();
    ob1.output();
    ob4.output();
    ob3.output();
    return 0;
}