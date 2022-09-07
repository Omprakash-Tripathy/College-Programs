#include <iostream>
#include <string.h>
using namespace std;

class Concatenate
{
private:
    char *result;

public:
    Concatenate(char *S1, char *S2)
    {
        result = new char[strlen(S1) + strlen(S2) + 1];
        strcpy(result, S1);
        strcat(result, " ");
        strcat(result, S2);
    }
    void Display()
    {
        cout << "The Result is : " << result;
    }
};
int main()
{
    char str1[] = "KIIT";
    char str2[] = "UNIVERSITY";
    Concatenate C(str1, str2);
    C.Display();
    return 0;
}