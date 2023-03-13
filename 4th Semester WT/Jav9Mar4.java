//WAP to overload the constructor of Perim class which will find the perimeter of circle and rectangle.

import java.util.*;

class Perim
{
    int r,l,b;
    Perim()
    {
        r=0;
        l=0;
        b=0;
    }
    Perim(int r)
    {
        this.r=r;
    }
    Perim(int l,int b)
    {
        this.l=l;
        this.b=b;
    }
    Perim(int r, int l, int b)
    {
        this.r=r;
        this.l=l;
        this.b=b;
    }
    public void display()
    {
        System.out.println("The perimeter of the circle is "+(2*3.14*r));
        System.out.println("The perimeter of the rectangle is "+(2*(l+b)));
    }
}

class Jav9Mar4
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the radius of the circle");
        int r = sc.nextInt();
        System.out.println("Enter the length and breadth of the rectangle");
        int l = sc.nextInt();
        int b = sc.nextInt();
        Perim p1 = new Perim();
        Perim p2 = new Perim(r);
        Perim p3 = new Perim(l,b);
        Perim p4 = new Perim(r,l,b);
        p1.display();
        p2.display();
        p3.display();
        p4.display();
    }
}