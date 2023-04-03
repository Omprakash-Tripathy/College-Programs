//If an email id is invalid then throw an user defined exception.


import java.util.*;
import java.lang.Exception;

class InvalidEmailException extends Exception
{
    public InvalidEmailException(String s)
    {
        super(s);
    }
}

class Email
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your email id");
        String email = sc.nextLine();
        try
        {
            if(email.contains("@") && email.contains("."))
            {
                System.out.println("Valid email id");
            }
            else
            {
                throw new InvalidEmailException("Invalid email id");
            }
        }
        catch(InvalidEmailException e)
        {
            System.out.println(e);
        }
    }
}