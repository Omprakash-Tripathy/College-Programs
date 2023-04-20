//5. WAP to count the number of vowels, numbers, special characters and words in a input string and check
//whether it is a palindrome or not.

import java.util.Scanner;

public class Jav20Apr5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string");
        String str = sc.nextLine();
        try {
            CountVowels(str);
            CountNumbers(str);
            CountSpecialCharacters(str);
            CountWords(str);
            CheckPalindrome(str);
        } catch (StringIndexOutOfBoundsException e) {
            System.out.println(e.getMessage());
        }
    }

    public static void CountVowels(String str) {
        int count = 0;
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) == 'a' || str.charAt(i) == 'e' || str.charAt(i) == 'i' || str.charAt(i) == 'o'
                    || str.charAt(i) == 'u') {
                count++;
            }
        }
        System.out.println("Number of vowels in the string is " + count);
    }

    public static void CountNumbers(String str) {
        int count = 0;
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) >= '0' && str.charAt(i) <= '9') {
                count++;
            }
        }
        System.out.println("Number of numbers in the string is " + count);
    }

    public static void CountSpecialCharacters(String str) {
        int count = 0;
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) >= '!' && str.charAt(i) <= '/') {
                count++;
            }
        }
        System.out.println("Number of special characters in the string is " + count);
    }

    public static void CountWords(String str) {
        int count = 0;
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) == ' ') {
                count++;
            }
        }
        System.out.println("Number of words in the string is " + count + 1);
    }

    public static void CheckPalindrome(String str) {
        String reverse = "";
        for (int i = str.length() - 1; i >= 0; i--) {
            reverse += str.charAt(i);
        }
        if (str.equals(reverse)) {
            System.out.println("String is a palindrome");

        } else {
            System.out.println("String is not a palindrome");
        }
    }
}