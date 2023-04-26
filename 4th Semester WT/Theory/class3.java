import java.util.*;

class class3 {
    public static void main(String[] args) {
        ArrayList<String> al = new ArrayList<String>();
        al.add("C");
        al.add("A");
        al.add("E");
        al.add("B");
        al.add("D");
        al.add("F");
        String str;
        System.out.print("Original Content: ");
        Iterator<String> itr = al.iterator();
        while (itr.hasNext()) {
            str = itr.next();
            System.out.print(str + " ");
        }
        System.out.println();
        ListIterator<String> litr = al.listIterator();
        while (litr.hasNext()) {
            str = litr.next();
            litr.set(str + "$");
        }
        System.out.print("Modified Content: ");
        itr = al.iterator();
        while (itr.hasNext()) {
            str = itr.next();
            System.out.print(str + " ");
        }
        System.out.println();
        System.out.print("Modified list backward :");
        while (litr.hasPrevious()) {
            str = litr.previous();
            System.out.print(str + " ");
        }
    }
}