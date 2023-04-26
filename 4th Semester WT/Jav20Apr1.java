//1. Write a Java class which has a method called ProcessInput(). This method checks the number
//entered by the user. If the entered number is negative then throw an user defined exception called
//NegativeNumberException, otherwise it displays the double value of the entered number.

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Jav20Apr1 {

    public static class NegativeNumberException extends Exception {
        public NegativeNumberException(String message) {
            super(message);
        }
    }

    public static void ProcessInput() throws IOException, NegativeNumberException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter a number:");
        String input = reader.readLine();
        double number = Double.parseDouble(input);

        if (number < 0) {
            throw new NegativeNumberException("Number cannot be negative!");
        } else {
            System.out.println("Double value of the entered number is: " + (number * 2));
        }
    }

    public static void main(String[] args) {
        try {
            ProcessInput();
        } catch (IOException e) {
            System.err.println("Error reading input from user: " + e.getMessage());
        } catch (NegativeNumberException e) {
            System.err.println("Error processing input: " + e.getMessage());
        }
    }
}