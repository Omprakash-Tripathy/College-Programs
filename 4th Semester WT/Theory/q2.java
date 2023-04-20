// Read a character from file f1 and write it in another file f2.

import java.io.*;

public class q2 {
    public static void main(String[] args) throws IOException {
        FileReader fr = new FileReader("f1.txt");
        FileWriter fw = new FileWriter("f2.txt");
        int i;
        while ((i = fr.read()) != -1) {
            fw.write(i);
        }
        fr.close();
        fw.close();
    }
}