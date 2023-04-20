//2. Write a program to create user defined exceptions called HrsException, MinException and SecException.
//Create a class Time which contains data members hours, minutes, seconds and throw the user defined 
//exceptions if hours (>24 & <0),minutes(>60 & <0),seconds(>60 & <0).

import java.util.Scanner;

public class Jav20Apr2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter hours");
        int hours = sc.nextInt();
        System.out.println("Enter minutes");
        int minutes = sc.nextInt();
        System.out.println("Enter seconds");
        int seconds = sc.nextInt();
        try {
            Time time = new Time(hours, minutes, seconds);
            System.out.println("Time is " + time.hours + ":" + time.minutes + ":" + time.seconds);
        } catch (HrsException e) {
            System.out.println(e.getMessage());
        } catch (MinException e) {
            System.out.println(e.getMessage());
        } catch (SecException e) {
            System.out.println(e.getMessage());
        }
    }
}

class Time {
    int hours;
    int minutes;
    int seconds;

    public Time(int hours, int minutes, int seconds) throws HrsException, MinException, SecException {
        if (hours > 24 || hours < 0) {
            throw new HrsException("Hours should be between 0 and 24");
        } else if (minutes > 60 || minutes < 0) {
            throw new MinException("Minutes should be between 0 and 60");
        } else if (seconds > 60 || seconds < 0) {
            throw new SecException("Seconds should be between 0 and 60");
        } else {
            this.hours = hours;
            this.minutes = minutes;
            this.seconds = seconds;
        }
    }
}

class HrsException extends Exception {
    public HrsException(String message) {
        super(message);
    }
}

class MinException extends Exception {
    public MinException(String message) {
        super(message);
    }
}

class SecException extends Exception {
    public SecException(String message) {
        super(message);
    }
}