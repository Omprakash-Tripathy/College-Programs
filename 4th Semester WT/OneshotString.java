import java.util.*;

public class OneshotString
{
    public static void main(String args[])
    {
        //Strings
        String name1 = "Opie";
        String name2 = new String("Nikhita");
        String name3 = name1 + " says hi to " + name2;
        System.out.println(name3);

        //Char at position
        System.out.println(name1.charAt(1));

        //Length of string
        System.out.println(name2.length());

        //Replace
        String name4 = name2.replace('N', 'C');
        System.out.println(name4);

        //Substring
        System.out.println(name3.substring(0, 4));
    }
}