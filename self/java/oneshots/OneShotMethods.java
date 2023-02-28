import java.util.*;
public class OneShotMethods
{
    public static void print()
    {
        System.out.println("Hello");
    }

    public static void printName(String name)
    {
        System.out.println(name);
    }

    public static void Sum(int a, int b)
    {
        int sum = a+b;
        System.out.println("Sum is: "+sum);
    }
    public static void main(String args[])
    {
        //Methods
        print();
        print();
        print();
        printName("Opie");
        printName("Amrita");
        Sum(10,20);
    }
}