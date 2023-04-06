import java.util.*;

public class Solution
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("================================");
        for(int i=0; i<3; i++)
        {
            String s = sc.next();
            int xx = sc.nextInt();
            String x = Integer.toString(xx);
            for (int j = s.length(); j < 15; j++)
                s += ' ';
            for (int j = x.length(); j < 3; j++)
                x = '0' + x;
            System.out.print(s+x+'\n');
        }
        System.out.println("================================");
    }
}