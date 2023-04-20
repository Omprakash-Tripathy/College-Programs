//Read an array(consider all the elements are in single digit) from a file f1, and display the average.

import java.io.*;

public class q7 {
    public static void main(String[] args) throws IOException {
        FileReader fr = new FileReader("f1.txt");
        FileWriter fw = new FileWriter("f2.txt");
        int i;
        int sum = 0;
        int count = 0;
        while ((i = fr.read()) != -1) {
            sum += i;
            count++;
        }
        fw.write(sum / count);
        fr.close();
        fw.close();
    }
}