//Linear search -> returns the index of the key or -1 if not found.
import java.util.Arrays;
public class ArrayFunctions {
    public static int linearSearch(int arr[],int key){
        for(int i=0;i<arr.length;i++){
            if(arr[i]==key){
                return i;
            }
        }
        return -1;
    }
    public static int binarySearch(int arr[],int key){
        int start = 0;
        int end = arr.length - 1;
        int mid = 0;
        while(start<=end){
            mid = (start+end)/2;
            if(arr[mid]==key){
                return mid;
            }
            else if(arr[mid]<key){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        int arr[] = new int[]{1,3,12,74,42,23,34,2,4,234};
        int idx = linearSearch(arr, 4);
        for(int a : arr){
            System.out.print(a+" ");
        }
        System.out.println();
        if(idx==-1){
            System.out.println("Not found");
        }
        else{
            System.out.println("Found at index: "+idx);
        }
        Arrays.sort(arr);
        for(int a : arr){
            System.out.print(a+" ");
        }
        System.out.println();
        idx = binarySearch(arr, 4);
        if(idx==-1){
            System.out.println("Not found");
        }
        else{
            System.out.println("Found at index: "+idx);
        }
    }
}
