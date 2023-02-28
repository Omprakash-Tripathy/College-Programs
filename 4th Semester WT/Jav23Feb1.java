//1.WAP in java to create a class Animal having following features: name, type and two member functions in() to input
//the details and out() for printing the details. Create three objects having name lion, dog and cow and their 
//respective eating type as carnivore, omnivore and herbivore and print the details.

public class Jav23Feb1
{
    public static void main(String[] args)
    {
        animal lion = new animal();
        animal dog = new animal();
        animal cow = new animal();
        lion.input("lion", "carnivore");
        dog.input("dog", "omnivore");
        cow.input("cow", "herbivore");

        lion.output();
        System.out.println();
        dog.output();
        System.out.println();
        cow.output();
    }
}

class animal
{
    String name;
    String type;

    public void input(String name, String type)
    {
        this.name = name;
        this.type = type;
    }

    public void output()
    {
        System.out.println("name :" + this.name);
        System.out.println("type :" + this.type);
    }
}