//Write a java program to create Account with 500 rupee minimum balance, deposit amount, withdraw amount and also throws 
//LessBalanceException which returns the statement that says withdraw amount is not valid.

import java.util.*;

class LessBalanceException extends Exception
{
    LessBalanceException(String s)
    {
        super(s);
    }
}

class Account
{
    int balance;
    Account(int balance)
    {
        this.balance=balance;
    }
    void deposit(int amount)
    {
        balance=balance+amount;
        System.out.println("Balance after deposit is "+balance);
    }
    void withdraw(int amount) throws LessBalanceException
    {
        if(balance-amount<500)
        {
            throw new LessBalanceException("Withdraw amount is not valid");
        }
        else
        {
            balance=balance-amount;
            System.out.println("Balance after withdraw is "+balance);
        }
    }
}

class Jav20Apr9
{
    public static void main(String args[])
    {
        Account a=new Account(1000);
        a.deposit(500);
        try
        {
            a.withdraw(1000);
        }
        catch(LessBalanceException e)
        {
            System.out.println(e);
        }
    }
}