import java.util.*;

public class OneShotCastingNConstants
{
    public static void main(String args[])
    {
        //Casting
        //Data type with more capacity can automatically accept input of data type with less capacity like double can accept int, this is implicit casting.
        //Implicit casting is done by the compiler.
        //Data type with less capacity cannot automatically accept input of data type with more capacity like int cannot accept double, we need to explicit cast it.
        //Explicit casting is done by using (datatype) before the variable.
        double price1 = 100.00;
        double FinalPrice1 = price1 + 18;
        System.out.println(FinalPrice1);

        int price2 = 100;
        int FinalPrice2 = price2 + (int)18.18;
        System.out.println(FinalPrice2);

        //Constants
        int i = 19;
        i = 6;
        System.out.println(i);
        final int j = 19;
        //j = 6;
        System.out.println(j);
    }
}
