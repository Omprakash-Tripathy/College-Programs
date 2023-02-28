import java.util.*;
// import bank;

//Abstraction
//Abstract class cannot have any objects, just can be inherited

interface Animals
{
    //All interface fields are by default public, static and final.
    //All methods are public and abstract by default, even if public isnt mentioned.
    public void walk();
    //No non abstract function inside interfaces
    // void eat()
    // {

    // }
}

interface Carnivore
{

}

//In Java multiple inheritance is there in interfaces and not in classes.
class Tiger implements Animals, Carnivore
{
    //All interfaces methods must be implemented.
    public void walk()
    {
        System.out.println("Tiger is walking");
    }
}

abstract class Animal
{
    //Constructor Chaining
    Animal()
    {
        System.out.println("Animal is created");
    }
    abstract void walk();

    public void eat()
    {
        System.out.println("Eating");
    }
}

class Horse extends Animal
{
    Horse()
    {
        System.out.println("Horse is created");
    }
    public void walk()
    {
        System.out.println("Horse is walking");
    }
}

class Chicken extends Animal
{
    Chicken()
    {
        System.out.println("Chicken is created");
    }
    public void walk()
    {
        System.out.println("Chicken is walking");
    }
}

class Pen
{
    String color;
    String type; //Ballpoint, gel, rollerball
    String brand;
    int price;
    public void write()
    {
        System.out.println("Writing");
    }
    public void refill()
    {
        System.out.println("Refilling");
    }
    public void print()
    {
        System.out.println("Color : " +this.color);
        System.out.println("Type : " +this.type);
        System.out.println("Brand : " +this.brand);
        System.out.println("Price : " +this.price);
    }
}

class Student
{
    String Name;
    int age;
    static String school;

    public void print()
    {
        System.out.println("Name : " +this.Name);
        System.out.println("Age : " +this.age);
        System.out.println("School : " +Student.school);
    }

    
    public void display(String Name)
    {
        System.out.println("Name : " +Name);
    }

    public void display(int age)
    {
        System.out.println("Age : " +age);
    }

    public void display(String Name, int age)
    {
        System.out.println("Name : " +Name);
        System.out.println("Age : " +age);
    }

    //Static function, changes value of school for all students at once.
    public static void changeSchool()
    {
        school = ("newschool");
    }

    Student()
    {
        System.out.println("Default Constructor Called");
    }

    Student(String name, int age)
    {
        System.out.println("Parameterized Constructor called");
        this.Name = name;
        this.age = age;
    }

    Student (Student s2)
    {
        System.out.println("Copy Constructor called");
        this.Name = s2.Name;
        this.age = s2.age;
    }
}

class Shape
{
    String color;

    public void area()
    {
        System.out.println("Displays area");
    }
}

class Triangle extends Shape //Inheritance
{
    public void area(int b, int h)
    {
        double ar = 0.5*b*h;
        System.out.println("Area of Triangle : " +ar);
    }
}

class EquilateralTriangle extends Triangle //Multi-level Inheritance
{
    public void area(int b, int h)
    {
        double ar1 = 0.5*b*h;
        System.out.println("Area of Equilateral Triangle : " +ar1);
    }
}

class Circle extends Shape //Hierarchial Inheritance
{
    public void area(int r)
    {
        double ar2 = 3.14*r*r;
        System.out.println("Area of Circle : " +ar2);
    }
}

public class OOPS
{
    public static void main(String args[])
    {
        // bank.Account account1 = new bank.Account();
        // account1.name = "customer1";

        System.out.println("Pen 1");
        Pen pen1 = new Pen();
        pen1.color = "Blue";
        pen1.type = "Roller Ball";
        pen1.brand = "Parker";
        pen1.price = 200;
        pen1.write();
        pen1.refill();

        System.out.println();
        System.out.println("Pen 2");
        Pen pen2 = new Pen();
        pen2.color = "Black";
        pen2.type = "Ballpoint";
        pen2.brand = "Luxor";
        pen2.price = 100;
        pen2.print();

        System.out.println();
        Student.school = "DAV"; //Static is directly called using classname, not object name as it is same for all objects in the class.
        Student s1 = new Student();
        s1.Name = "John";
        s1.age = 20;
        s1.print();

        System.out.println();
        Student s2 = new Student();
        s2.Name = "Mary";
        s2.age = 21;
        s2.print();

        System.out.println();
        Student s3 = new Student("Opie", 19);
        s3.print();

        System.out.println();
        Student s4 = new Student(s3);
        s4.print();

        System.out.println();
        Triangle t1 = new Triangle();
        t1.color = "Red";
        t1.area(10, 20);

        System.out.println();
        Horse horse = new Horse();
        horse.walk();
        horse.eat();

        // Animal animal = new Animal();
        // animal.walk();
        // animal.eat();
    }
}