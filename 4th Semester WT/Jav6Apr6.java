//2. WAP to illustrate three types of exception and how they are handles using try-catch block.

import java.util.*;

public class Jav6Apr6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int a = sc.nextInt();
        System.out.print("Enter another number: ");
        int b = sc.nextInt();
        try {
            int c = a / b;
            System.out.println("c = " + c);
        } catch (ArithmeticException e) {
            System.out.println("Arithmetic Exception");
        }
        try {
            int[] arr = new int[5];
            arr[6] = 10;
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Array Index Out of Bounds Exception");
        }
        try {
            String s = null;
            System.out.println(s.length());
        } catch (NullPointerException e) {
            System.out.println("Null Pointer Exception");
        }
    }
}