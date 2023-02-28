import java.util.*;

public class OneShotMath
{
    public static void main(String Args[])
    {
        System.out.println(Math.max(7,9));
        System.out.println(Math.min(7,9));

        //Random - prints value between 0 - 1
        System.out.println(Math.random());

        //Multiplied by 100 when typecasting to int cuz otherwise it will always print 0
        System.out.println((int)(Math.random()*100));
    }
}