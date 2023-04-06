//4. WAP so that it generates Arithmatic Exception and ArrayIndexOut of Bounds Exception and handle it using Try-catch block

public class Jav6Apr4 {
    public static void main(String[] args) {
        int a = 10;
        int b = 0;
        int c = 0;
        int[] arr = new int[5];
        try {
            c = a / b;
            arr[6] = 10;
        } catch (ArithmeticException e) {
            System.out.println("Arithmetic Exception");
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Array Index Out of Bounds Exception");
        }
        System.out.println("c = " + c);
    }
}