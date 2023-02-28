import java.util.*;

import javax.xml.transform.Source;

public class OneShotInputting
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        //Int,Float and other types
        System.out.println("Enter your age : ");
        int age = sc.nextInt();
        //float age = sc.nextFloat();
        System.out.println(age);
        System.out.println("Your age is : " + age);

        //String - Token (single word)
        System.out.println("Enter your name : ");
        String name = sc.next();
        System.out.println(name);
        System.out.println("Your name is : " + name);

        //String - Line
        System.out.println("Enter your full name : ");
        String name2 = sc.nextLine();
        System.out.println(name2);
        System.out.println("Your full name is : " + name2);
    }
}