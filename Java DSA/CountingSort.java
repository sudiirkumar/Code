import java.util.Vector;

public class CountingSort{
    public static void countingSort(int arr[]){
        int maxm = Integer.MIN_VALUE;
        for(int i=0;i<arr.length;i++)
            maxm = Integer.max(maxm, arr[i]);
        Vector<Integer> freq = new Vector<Integer>(maxm+1);
        for(int x : arr){
            freq.add(x, freq.get(x)+1);
        }
        int j=0;
        for(int i=0;i<=maxm;i++){
            while(freq.get(i)>0){
               arr[j++] = i;
                freq.set(i, freq.get(i)-1);
            }
        }
    }
    public static void main(String[] args) {
        int arr[] = new int[]{12,23,45,4,24,27,-86,3,-67,24};
        //display the original array
        System.out.println("Original array : ");
        for (int i : arr) {
            System.out.print(i+" ");
        }
        //calling the insertion sort method
        countingSort(arr);
        //display the sorted array
        System.out.println("\nSorted array : ");
        for (int i : arr) {
            System.out.print(i+" ");
        }
    }
}