import java.util.*;

class class2 {
    public static void main(String args[]) {
        LinkedList<String> ls = new LinkedList<String>();
        ls.add("America");
        ls.add("India");
        ls.add("Japan");
        ls.add("China");
        ls.add(2, "Pakistan");
        ls.add("Australia");
        ls.add("New York");
        System.out.println("Original Content" + ls);
        ls.remove(4);
        ls.remove("Pakistan");
        System.out.println("Content after Deletion: " + ls);
        ls.removeLast();
        System.out.println("Content after Deletion of First: " + ls);
        String str = ls.get(2);
        ls.set(2, str + " Changed");
        System.out.println("Content after Changed: " + ls);
    }
}