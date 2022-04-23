import java.util.ArrayList;
import java.util.Collections;

//wap in java to join 2 arraylist into one arraylist
public class JoinArrayList{
    public static void main(String[] args) {
        ArrayList<Integer> list1 = new ArrayList<>();
        list1.add(1);
        list1.add(2);
        list1.add(3);
        list1.add(4);
        System.out.println(list1);

        ArrayList<Integer> list2 = new ArrayList<>();
        list2.add(5);
        list2.add(6);
        list2.add(7);
        list2.add(8);
        System.out.println(list2);

        ArrayList<Integer> newList = new ArrayList<>();
        newList.addAll(list1);
        newList.addAll(list2);
        Collections.shuffle(newList);
        System.out.println(newList);
    }
}