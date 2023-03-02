//WAP to print “This is ____ th object created” when an object will be created (Note: it will print the no. of object created, hint: parameterized constructor).

import java.util.*;

class Testing
{
    Testing(int count)
    {
        if(count==1)
            System.out.println("This is " + count + "st object created");
        else if(count==2)
            System.out.println("This is " + count + "nd object created");
        else if(count==3)
            System.out.println("This is " + count + "rd object created");
        else
            System.out.println("This is " + count + "th object created");
        count++;
    }
}

public class Jav2Mar3
{
    public static void main(String args[])
    {
        Testing t1 = new Testing(1);
        Testing t2 = new Testing(2);
        Testing t3 = new Testing(3);
    }
}