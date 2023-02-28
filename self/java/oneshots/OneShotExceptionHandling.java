import java.util.*;

public class OneShotExceptionHandling
{
    public static void main(String args[])
    {
        int[] marks = {97, 98, 99};
        try
        {
            System.out.println(marks[1]);
            System.out.println(marks[5]);
        }
        catch (Exception exception1)
        {
            System.out.println("Exception caught");
        }

        System.out.println("The student is Opie");
    }
}