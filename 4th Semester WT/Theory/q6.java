//Read two numbers(contains any numbers of digits) from different files f1 and f2 and display their addition in another file f3.

import java.io.*;

public class q6 {
    public static void main(String[] args) throws IOException {
        FileReader fr1 = new FileReader("f1.txt");
        FileReader fr2 = new FileReader("f2.txt");
        FileWriter fw = new FileWriter("f3.txt");
        int i1 = fr1.read();
        int i2 = fr2.read();
        fw.write(i1 + i2);
        fr1.close();
        fr2.close();
        fw.close();
    }
}