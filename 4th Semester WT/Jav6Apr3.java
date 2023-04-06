//3.Define an interface Motor with a data member –capacity and two methods such as run() and consume(). Define a Java class Washing machine
//which implements this interface and write the code to check the value of the interface data member through an object of the class.

import java.util.*;

interface Motor
{
    int capacity = 100;
    void run();
    void consume();
}

class WashingMachine implements Motor
{
    public void run()
    {
        System.out.println("Washing Machine is running");
    }
    public void consume()
    {
        System.out.println("Washing Machine is consuming " + capacity + " units of electricity");
    }
}

public class Jav6Apr3
{
    public static void main(String args[])
    {
        WashingMachine w = new WashingMachine();
        w.run();
        w.consume();
    }
}