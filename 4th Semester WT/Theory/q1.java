//Read a character from file f1 and print it in the console.

import java.io.*;

public class q1 {
    public static void main(String[] args) throws IOException {
        FileReader fr = new FileReader("f1.txt");
        int i;
        while ((i = fr.read()) != -1) {
            System.out.print((char) i);
        }
        fr.close();
    }
}