//WAP to print “An object is created” everytime when you create an object of a class.

import java.util.*;

class Test
{
    static int count = 0;
    Test()
    {
        System.out.println("An object is created");
        count++;
    }
}

public class Jav2Mar2
{
    public static void main(String args[])
    {
        Test t1 = new Test();
        Test t2 = new Test();
        Test t3 = new Test();
        System.out.println("Total objects created: " + Test.count);
    }
}