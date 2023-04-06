//1. llustrate the usage of abstract class with following Java classes –
//i>An abstract class student with data member roll no, reg no and an abstract method course()
//ii>A subclass kiitian with course() method implementation

import java.util.*;

abstract class Student
{
    int rollno;
    int regno;
    abstract void course();
}

class Kiitian extends Student
{
    void course()
    {
        System.out.println("B.Tech");
    }
}

public class Jav6Apr1
{
    public static void main(String args[])
    {
        Kiitian k = new Kiitian();
        k.course();
    }
}