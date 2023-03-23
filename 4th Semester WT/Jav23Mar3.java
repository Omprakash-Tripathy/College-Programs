//Write a program in java using inheritance to show how to call the base class parameterized constructors from the
//derived class using super.

import java.util.*;

class College
{
    String name;
    int code;
    College(String name, int code)
    {
        this.name = name;
        this.code = code;
    }
    void disp()
    {
        System.out.println("College name: "+name);
        System.out.println("College code: "+code);
    }
}

class Student extends College
{
    String name;
    int roll_no;
    Student(String name, int roll_no, String cname, int ccode)
    {
        super(cname, ccode);
        this.name = name;
        this.roll_no = roll_no;
    }
    void disp()
    {
        super.disp();
        System.out.println("Student name: "+name);
        System.out.println("Student roll number: "+roll_no);
    }
}

public class Jav23Mar3
{
    public static void main(String[] args)
    {
        Student s = new Student("Omprakash", 2105561, "KIIT", 123);
        s.disp();
    }
}