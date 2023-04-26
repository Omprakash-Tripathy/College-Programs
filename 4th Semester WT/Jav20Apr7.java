//Write a Java program to illustrate try..catch..finally block.

public class Jav20Apr7
{
    public static void main(String args[])
    {
        int a=10,b=0,c;
        try
        {
            c=a/b;
            System.out.println("Result is "+c);
        }
        catch(ArithmeticException e)
        {
            System.out.println("Exception is "+e);
        }
        finally
        {
            System.out.println("Finally block is executed");
        }
    }
}