//A plastic manufacturer sells plastic in different shapes like 2D sheet and 3D box. The cost of sheet is Rs 40 per square
//ft. and the cost of box is Rs 60/ per cubic ft. Implement it in Java to calculate the cost of plastic as per the
//dimensions given by the user where 3D inherits from 2D.

import java.util.*;

class Plastic
{
    int l,b,h;
    double cost;
    void getdata()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the length, breadth and height of the plastic");
        l = sc.nextInt();
        b = sc.nextInt();
        h = sc.nextInt();
    }
}

class Sheet extends Plastic
{
    void cal()
    {
        cost = l*b*40;
    }
    void display()
    {
        System.out.println("The cost of sheet is Rs "+cost);
    }
}

class Box extends Plastic
{
    void cal()
    {
        cost = l*b*h*60;
    }
    void display()
    {
        System.out.println("The cost of box is Rs "+cost);
    }
}

public class Jav23Mar1
{
    public static void main(String[] args)
    {
        Sheet s = new Sheet();
        s.getdata();
        s.cal();
        s.display();

        Box b = new Box();
        b.getdata();
        b.cal();
        b.display();
    }
}