public class InsertionSort{
    public static void insertionSort(int arr[]){
        for(int i=1;i<arr.length;i++){
            int x = arr[i];
            int j;
            for(j=i-1;j>=0;j--){
                if(arr[j]>x)
                    arr[j+1]=arr[j];
                else
                    break;
            }
            arr[j+1]=x;
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
        insertionSort(arr);
        //display the sorted array
        System.out.println("\nSorted array : ");
        for (int i : arr) {
            System.out.print(i+" ");
        }
    }
}