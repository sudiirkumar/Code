import java.util.*;
class HashSet1{
    public static void main(String[] args) {
        //creating hashset and adding elements
        HashSet<String> set = new HashSet<>();
        set.add("a");
        set.add("b");
        set.add("c");
        set.add("d");
        set.add("e");
        //printing without any removal
        System.out.println("Before removing : "+set);
        set.remove("d");
        System.out.println("After removing : "+set);
        HashSet<String> set1 = new HashSet<>();
        set1.add("A");
        set1.add("B");
        set.addAll(set1);
        System.out.println("Updated list : "+set);
        //removing all elements of set1 from set
        set.removeAll(set1);
        System.out.println("After removing : "+set);
        //removing elements on the basis of specified condition
        set.removeIf(str->str.contains("b"));
        System.out.println("After using removeIf method : "+set);
        //removing all elements 
        set.clear();
        System.out.println("After clear() method : "+set);
    }
}