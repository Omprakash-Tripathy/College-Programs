#include <iostream>
using namespace std;

class Bank
{
private:
    string depoName;
    string accType;
    int accNo;
    int balance;

public:
    void input()
    {
        cout << "Enter the Name of Depositor : ";
        cin >> depoName;
        cout << "Enter your account type : ";
        cin >> accType;
        cout << "Enter your account number : ";
        cin >> accNo;
        cout << "Enter Balance : ";
        cin >> balance;
    }

    int c_balance = 0;
    int n_balance = 0;

    void withdraw()
    {
        int initial_value = 5000;
        cout << "Enter  the amount you want to withdraw : ";
        int withdrawn_amt;
        cin >> withdrawn_amt;
        if ((n_balance - withdrawn_amt) >= initial_value)
        {
            cout << "You have withdrawn " << withdrawn_amt << " amount from your bank.\nTHANK YOU !!" << endl;
            c_balance = n_balance - withdrawn_amt;
            cout << "Current Balance :" << c_balance << endl;
        }
        else
        {
            cout << "Withdrawal declined" << endl;
        }
    }

    void deposit()
    {
        cout << "Enter the amount you want to deposit : ";
        int deposit_amt;
        cin >> deposit_amt;
        n_balance = balance + deposit_amt;
        cout << "You have deposited " << deposit_amt << " amount in your bank.\nTHANK YOU !!" << endl;
        cout << " Current Balance : " << n_balance << endl;
    }

    void display()
    {
        cout << "\nName of Depositor : " << depoName << endl;
        cout << "Account Type : " << accType << endl;
        cout << "Account No. : " << accNo << endl;
        cout << "Balance : " << balance << endl;
    }
};

int main()
{
    Bank b1;
    b1.input();
    b1.display();
    b1.deposit();
    b1.withdraw();

    return 0;
}