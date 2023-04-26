//Create an user defined exception named Check Argument to check the number of arguments passed through command line. If the number 
//of arguments is less than four, throw the Check Argument exception, else print the addition of squares of all the four elements.

import java.util.*;

class CheckArgument extends Exception
{
    CheckArgument(String s)
    {
        super(s);
    }
}

class Jav20Apr8
{
    public static void main(String args[])
    {
        int sum=0;
        try
        {
            if(args.length<4)
            {
                throw new CheckArgument("Number of arguments is less than 4");
            }
            else
            {
                for(int i=0;i<args.length;i++)
                {
                    sum=sum+(Integer.parseInt(args[i])*Integer.parseInt(args[i]));
                }
                System.out.println("Sum of squares of all the four elements is "+sum);
            }
        }
        catch(CheckArgument e)
        {
            System.out.println(e);
        }
    }
}