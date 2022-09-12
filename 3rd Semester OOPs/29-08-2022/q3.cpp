/*WAP in c++ to design a class Prime having integer array as data member.
Use appropriate member functions to read data, to display data,
and display number of prime elements in the array.
*/
#include <iostream>
using namespace std;
class Prime
{
    private:
    int n = 5;
    int arr[5];
    public:
    void readData()
    {
        int i;
        //cout<<"Enter size of array: ";
        //cin>>n;
        cout<<"Enter numbers in array: "<<endl;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }
    void displayData()
    {
        int i;
        cout<<"\nDisplaying Data : "<<endl;
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
        cout<<endl;
    }
    void displayPrimeCount()
    {
        int primeCount = 0;
        int i,j,c;
        for(i=0;i<n;i++)
        {
            c = 0;
            for(j=2;j<arr[i];j++)
            {
                if (arr[i]%j == 0)
                {
                    c++;
                }
            }
            if(c == 0)
            {
                primeCount++;
            }
        }
        cout<<"Total prime numbers = "<<primeCount<<endl;
    }
};
main()
{
    Prime ob;
    ob.readData();
    ob.displayData();
    ob.displayPrimeCount();
}