import java.util.*;

public class OneShotArrays
{
    public static void main(String args[])
    {
        //Create and display
        int[] marks = new int[3];
        marks[0] = 99;
        marks[1] = 98;
        marks[2] = 97;
        //int[] marks = {99,98,97};
        System.out.println("Unsorted : ");
        System.out.println(marks[0]);
        System.out.println(marks[1]);
        System.out.println(marks[2]);
        
        //Sort
        Arrays.sort(marks);
        System.out.println("Sorted : ");
        System.out.println(marks[0]);

        //2D Array
        System.out.println("2D Array : ");
        int[][] FinalMarks = {{99, 98, 97}, {89, 88, 87}};
        System.out.println(FinalMarks[1][0]);
    }
}