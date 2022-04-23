
//convert a array to a collection
import java.util.*;
public class ArrToColl{
    public static void main(String[] args) {
        Integer arr[] = {123,1234,2,4124,1,24,21,4};
        System.out.println("The array is :");
        for(Integer x : arr){
            System.out.print(x+" ");
        }
        System.out.println();
        List list = Arrays.asList(arr);
        System.out.println("The elements in the list are : \n"+list);
    }
}