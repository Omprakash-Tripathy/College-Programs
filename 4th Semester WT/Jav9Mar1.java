//WAP to declare a 2x2 multi-dimensional array, initialize it and find the sum of left diagonal and right diagonal.

import java.util.*;

class Jav9Mar1
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int a[][] = new int[2][2];
        int i,j;
        int sum1=0,sum2=0;
        System.out.println("Enter the elements of the array");
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                a[i][j] = sc.nextInt();
            }
        }
        System.out.println("The elements of the array are");
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                System.out.print(a[i][j]+" ");
            }
            System.out.println();
        }
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                if(i==j)
                {
                    sum1 = sum1 + a[i][j];
                }
                if(i+j==1) // array length - 1 => 2-1 = 1
                {
                    sum2 = sum2 + a[i][j];
                }
            }
        }
        System.out.println("The sum of left diagonal is " + sum1);
        System.out.println("The sum of right diagonal is " + sum2);
    }
}