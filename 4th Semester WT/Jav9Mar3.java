//WAP to overload the area method which will find the area of a circle and area of a rectangle.

import java.util.*;

class Jav9Mar3
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the radius of the circle");
        int r = sc.nextInt();
        System.out.println("Enter the length and breadth of the rectangle");
        int l = sc.nextInt();
        int b = sc.nextInt();
        System.out.println("The area of the circle is "+area(r));
        System.out.println("The area of the rectangle is "+area(l,b));
    }
    public static double area(int r)
    {
        return 3.14*r*r;
    }
    public static int area(int l,int b)
    {
        return l*b;
    }
}