
//convert a array to a collection
import java.util.*;
public class ArrToColl{
    public static void main(String[] args) {
        Integer arr[] = {12,123,34,12,34,1,41,4,23,4,2,42,14,1};
        System.out.println("The array is :");
        for(Integer x : arr){
            System.out.print(x+" ");
        }
        System.out.println();
        List list = Arrays.asList(arr);
        System.out.println("The elements in the list are : \n"+list);
    }
}