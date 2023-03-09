//WAP to declare and initialize a jagged array with even nos., where 1st row contains 3 elements, 2nd 2 elements, 3rd 1 element, 
//4th 2 elements and 5th 3 elements. Print the array.

import java.util.*;

class Jav9Mar2
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int a[][] = new int[5][];
        int i,j;
        int k=2;
        for(i=0;i<5;i++)
        {
            a[i] = new int[k];
            k++;
        }
        System.out.println("Enter the elements of the array");
        for(i=0;i<5;i++)
        {
            for(j=0;j<a[i].length;j++)
            {
                a[i][j] = sc.nextInt();
            }
        }
        System.out.println("The elements of the array are");
        for(i=0;i<5;i++)
        {
            for(j=0;j<a[i].length;j++)
            {
                System.out.print(a[i][j]+" ");
            }
            System.out.println();
        }
    }
}