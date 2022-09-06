#include <iostream.h>
#include <string.h>
#include <conio.h>
class Constructor
{
private:
    char *result;

public:
    Constructor(char *S1, char *S2)
    {
        strcpy(result, S1);
        strcat(result, S2);
    }
    void Display()
    {
        cout << "\n\n\t\t\t The Result is : " << result;
    }
};
void main()
{
    char *Str1, *Str2;
    clrscr();
    cout << "\n\n\t\t********************************************************";
    cout << "\n\n\t\t\t String Concatenate Using Dynamic Constructors";
    cout << "\n\n\t\t********************************************************";
    cout << "\n\n\t\t\t Enter the String 1 : ";
    cin >> Str1;
    cout << "\n\n\t\t\t Enter the String 2 : ";
    cin >> Str2;
    Constructor C(Str1, Str2);
    C.Display();
    getch();
}