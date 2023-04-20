//1. Write a Java class which has a method called ProcessInput(). This method checks the number
//entered by the user. If the entered number is negative then throw an user defined exception called
//NegativeNumberException, otherwise it displays the double value of the entered number.


import java.util.Scanner;

public class Jav20Apr1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number");
        int num = sc.nextInt();
        try {
            ProcessInput(num);
        } catch (NegativeNumberException e) {
            System.out.println(e.getMessage());
        }
    }

    public static void ProcessInput(int num) throws NegativeNumberException {
        if (num < 0) {
            throw new NegativeNumberException("Negative Number");
        } else {
            System.out.println("Double value of the entered number is " + num * 2);
        }
    }
}

class NegativeNumberException extends Exception {
    public NegativeNumberException(String message) {
        super(message);
    }
}