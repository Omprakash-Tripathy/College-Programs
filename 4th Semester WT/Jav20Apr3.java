//3. Write one program which will illustrate all the following concepts:-
//i) using multiple catch blocks
//ii) parent class exception can handle child class exception
//iii) A subclass exception must appear before super-class exception

import java.util.Scanner;

public class Jav20Apr3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number");
        int num = sc.nextInt();
        try {
            ProcessInput(num);
        } catch (NegativeNumberException e) {
            System.out.println(e.getMessage());
        } catch (Exception e) {
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