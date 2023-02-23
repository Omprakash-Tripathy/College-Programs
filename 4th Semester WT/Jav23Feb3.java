// WAP to Create a class Employee with data members empid, name and salary. Use inp() to take the input of the employee and use disp() to print the employee
// details. Create 3 objects of employees and display their details.
import java.util.Scanner;

public class Jav23Feb3
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        employee e1 = new employee();
        // employee e2 = new employee();
        // employee e3 = new employee();
        e1.inp(sc);
        // e2.inp(sc);
        // e3.inp(sc);
        e1.desp();
        // e2.desp();
        // e3.desp();

    }
}

class employee
{
    int empid;
    String name;
    int salary;
    // void in()
    // {
    // empid=sc.nextInt();
    // name=sc.next();
    // salary=sc.nextInt();
    // }

    public void inp(Scanner sc)
    {
        System.out.println("employee id : ");
        this.empid = sc.nextInt();
        System.out.println("employee name : ");
        this.name = sc.next();
        System.out.println("employee salary : ");
        this.salary = sc.nextInt();
        sc.close();
    }

    public void desp()
    {
        System.out.println("employee id : " + this.empid);
        System.out.println("employee name : " + this.name);
        System.out.println("employee salary : " + this.salary);
    }
};