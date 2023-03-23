//Write a program to create an Account class containing acc_no, balance as data members and disp() to display the
//details. Inherit it in Person class with all mentioned data members and functions. Person class also has name
//and aadhar_no as extra data members of its own. Override disp() function. Create 2 persons details.

import java.util.*;

class Account
{
    int acc_no;
    double balance;
    void getdata()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the account number and balance");
        acc_no = sc.nextInt();
        balance = sc.nextDouble();
    }
    void disp()
    {
        System.out.println("Account number: "+acc_no);
        System.out.println("Balance: "+balance);
    }
}

class Person extends Account
{
    String name;
    int aadhar_no;
    void getdata()
    {
        super.getdata();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the name and aadhar number");
        name = sc.nextLine();
        aadhar_no = sc.nextInt();
    }
    void disp()
    {
        super.disp();
        System.out.println("Name: "+name);
        System.out.println("Aadhar number: "+aadhar_no);
    }
}

public class Jav23Mar2
{
    public static void main(String[] args)
    {
        Person p = new Person();
        p.getdata();
        p.disp();
    }
}