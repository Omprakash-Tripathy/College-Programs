//WAP to print “This is ____ th object created” when an object will be created (Note: Use Static Variable).

import java.util.*;

class Testing
{
    static int count = 0;
    Testing()
    {
        int no = count+1;
        if(no==1)
            System.out.println("This is " + no + "st object created");
        else if(no==2)
            System.out.println("This is " + no + "nd object created");
        else if(no==3)
            System.out.println("This is " + no + "rd object created");
        else
            System.out.println("This is " + no + "th object created");
        count++;
    }
}

public class Jav2Mar5
{
    public static void main(String args[])
    {
        Testing t1 = new Testing();
        Testing t2 = new Testing();
        Testing t3 = new Testing();
        System.out.println();
        System.out.println("Total objects created: " + Testing.count);
    }
}