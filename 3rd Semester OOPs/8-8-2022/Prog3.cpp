#include <iostream>
using namespace std;

void displayChar(int n = 80, char ch = '*')
{
    for (int i = 0; i < n; i++)
    {
        cout << ch << " ";
    }
    cout << endl;
}

//function overloading is a method to use the same name functions in all of the code

int main()
{
    int n;
    char ch;
    bool choice1,choice2;
    cout<<"Do you want to specify character?"<<endl;
    cin>>choice1;

    if(choice1==1)
    {    
        cin >> ch;
        cout<<"Do you want to specify the number of times?"<<endl;
        cin>>choice2;

        if(choice2==1)
        {
            cin>>n;
            displayChar(n, ch);
        }
        else
        {
            displayChar(ch);
        }
    }
    else
    {
        displayChar();
    }
    return 0;
}