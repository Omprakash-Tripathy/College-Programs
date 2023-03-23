//Write a program in java to define a class Shape which has data member „area‟ and a member function showArea().
//Derive two classes Circle and Rectangle from Shape class. Add appropriate data members and member functions to
//calculate and display the area of Circle and Rectangle.

import java.util.*;

class Shape
{
    double area;
    void showArea()
    {
        System.out.println("Area: "+area);
    }
}

class Circle extends Shape
{
    double radius;
    Circle(double radius)
    {
        this.radius = radius;
    }
    void calcArea()
    {
        area = 3.14*radius*radius;
    }
}

class Rectangle extends Shape
{
    double length, breadth;
    Rectangle(double length, double breadth)
    {
        this.length = length;
        this.breadth = breadth;
    }
    void calcArea()
    {
        area = length*breadth;
    }
}

public class Jav23Mar4
{
    public static void main(String[] args)
    {
        Circle c = new Circle(5);
        c.calcArea();
        c.showArea();
        Rectangle r = new Rectangle(5, 10);
        r.calcArea();
        r.showArea();
    }
}