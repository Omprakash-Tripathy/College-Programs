//1.llustrate the usage of abstract class with following Java classes –
//i>An abstract class “Academic” with data member name,empid and an abstract method work-hour() and two non abstract methods lab() and theory().
//ii>A subclass “faculty”will take the input for number of theory hours assigned using theory(), lab hour asigned using lab() and calculate total
//work hour using work-hour()
//ii> A subclass “programmer”will take the input for lab hour asigned using lab() and calculate total work hour using work-hour()

import java.util.*;

abstract class Academic
{
    String name;
    int empid;
    abstract void workhour();
    void lab()
    {
        System.out.println("Enter number of lab hours assigned: ");
        Scanner sc = new Scanner(System.in);
        int lab = sc.nextInt();
        System.out.println("Lab hours assigned: " + lab);
    }
    void theory()
    {
        System.out.println("Enter number of theory hours assigned: ");
        Scanner sc = new Scanner(System.in);
        int theory = sc.nextInt();
        System.out.println("Theory hours assigned: " + theory);
    }
}

class Faculty extends Academic
{
    void workhour()
    {
        System.out.println("Enter number of lab hours assigned: ");
        Scanner sc = new Scanner(System.in);
        int lab = sc.nextInt();
        System.out.println("Enter number of theory hours assigned: ");
        int theory = sc.nextInt();
        System.out.println("Total work hours: " + (lab + theory));
    }
}

class Programmer extends Academic
{
    void workhour()
    {
        System.out.println("Enter number of lab hours assigned: ");
        Scanner sc = new Scanner(System.in);
        int lab = sc.nextInt();
        System.out.println("Total work hours: " + lab);
    }
}

public class Jav6Apr5
{
    public static void main(String args[])
    {
        Faculty f = new Faculty();
        f.lab();
        f.theory();
        f.workhour();
        Programmer p = new Programmer();
        p.lab();
        p.workhour();
    }
}