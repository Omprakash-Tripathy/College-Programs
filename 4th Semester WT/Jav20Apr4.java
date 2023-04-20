//4. Write a program to perform following operations on user entered strings –
//i) Change the case of the string
//ii) Reverse the string
//iii) Compare two strings
//iv) Insert one string into another string

import java.util.Scanner;

public class Jav20Apr4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string");
        String str1 = sc.nextLine();
        System.out.println("Enter another string");
        String str2 = sc.nextLine();
        System.out.println("Enter a number");
        int num = sc.nextInt();
        try {
            ChangeCase(str1);
            ReverseString(str1);
            CompareStrings(str1, str2);
            InsertString(str1, str2, num);
        } catch (StringIndexOutOfBoundsException e) {
            System.out.println(e.getMessage());
        }
    }

    public static void ChangeCase(String str) {
        System.out.println("String in upper case is " + str.toUpperCase());
        System.out.println("String in lower case is " + str.toLowerCase());
    }

    public static void ReverseString(String str) {
        String reverse = "";
        for (int i = str.length() - 1; i >= 0; i--) {
            reverse += str.charAt(i);
        }
        System.out.println("Reverse of the string is " + reverse);
    }

    public static void CompareStrings(String str1, String str2) {
        if (str1.equals(str2)) {
            System.out.println("Strings are equal");
        } else {
            System.out.println("Strings are not equal");
        }
    }

    public static void InsertString(String str1, String str2, int num) {
        String newString = str1.substring(0, num) + str2 + str1.substring(num);
        System.out.println("New string is " + newString);
    }
}