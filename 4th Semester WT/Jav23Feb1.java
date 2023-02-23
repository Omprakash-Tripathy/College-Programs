//1.WAP in java to create a class Animal having following features: name, type andtwo member functions in() to input the details and out() for printing the details.
//Create three objects having name lion, dog and cow and their respective eating type as carnivore, omnivore and herbivore and print the details.

public class Jav23Feb1
{
    public static void main(String[] args)
    {
        animal tiger = new animal();
        animal dog = new animal();
        animal goat = new animal();
        tiger.input("tiger", "carnivore");
        dog.input("dog", "omnivore");
        goat.input("goat", "herbivore");

        tiger.output();
        System.out.println();
        dog.output();
        System.out.println();
        goat.output();
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