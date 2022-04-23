import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.List;

//wap to shuffle all the elements of collection in java
public class ShuffleElements{
    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<Integer>();
        list.add(10);
        list.add(12);
        list.add(13);
        list.add(234);
        System.out.println(list);

        
        Collections.shuffle(list);

        System.out.println(list);
    }   
}