//2. Define an interface with three methods – earnings(), deductions() and bonus() and define a Java class Manager which uses this interface without implementing 
//bonus() method. Also define another Java class Substaff which extends from Manager class and implements bonus() method. Write the complete program to find out 
//earnings, deduction and bonus of a substaff with basic salary amount entered by the user as per the following guidelines –
//earnings basic + DA (80% of basic) + HRA (15% of basic)
//deduction PF 12% of basic
//bonus 50% of basic

import java.util.*;

interface Salary
{
    void earnings();
    void deductions();
    void bonus();
}

class Manager implements Salary
{
    int basic;
    Manager(int basic)
    {
        this.basic = basic;
    }
    public void earnings()
    {
        System.out.println("Earnings: " + (basic + (0.8 * basic) + (0.15 * basic)));
    }
    public void deductions()
    {
        System.out.println("Deductions: " + (0.12 * basic));
    }
    public void bonus()
    {
        System.out.println("Bonus: 0");
    }
}

class Substaff extends Manager
{
    Substaff(int basic)
    {
        super(basic);
    }
    public void bonus()
    {
        System.out.println("Bonus: " + (0.5 * basic));
    }
}

public class Jav6Apr2
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter basic salary: ");
        int basic = sc.nextInt();
        Substaff s = new Substaff(basic);
        s.earnings();
        s.deductions();
        s.bonus();
    }
}