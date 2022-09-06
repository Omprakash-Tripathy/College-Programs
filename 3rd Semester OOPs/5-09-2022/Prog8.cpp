#include <iostream>
using namespace std;
class time1
{
    int hour, minu, sec;

public:
    time1()
    {
        hour = 14;
        minu = 3;
        sec = 2000;
    }
    time1(int h, int s, int m = 0)
    {
        hour = h;
        minu = m;
        sec = s;
    }
    time1(const time1 &x, const time1 &y, const time1 &z)
    {
        hour = x.hour;
        minu = y.minu;
        sec = z.sec;
    }
    void display()
    {
        minu = minu + (sec / 60);
        sec = sec % 60;
        hour = hour + (minu / 60);
        minu = minu % 60;
        cout << hour << ":" << minu << ":" << sec << endl;
    }
};
int main()
{
    time1 t1;
    t1.display();
    time1 t2(4, 94);
    t2.display();
    time1 t3(t1);
    t3.display();
    time1 t4(t2);
    t4.display();
    return 0;
}