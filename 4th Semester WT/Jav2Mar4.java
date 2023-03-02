//Initialize an integer array in java and print only those elements which are greater than 10( using for-each loop).

import java.util.*;

public class Jav2Mar4
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array: ");
        int size = sc.nextInt();
        int arr[] = new int[size];
        System.out.println("Enter the elements of the array: ");
        for(int i=0; i<size; i++)
        {
            arr[i] = sc.nextInt();
        }

        System.out.println();
        System.out.println("The elements of the array greater than 10 are: ");
        for(int i: arr)
        {
            if(i>10)
                System.out.println(i);
        }
    }
}