public class SelectionSort{
    public static void selectionSort(int arr[]){
        for(int i=0;i<arr.length-1;i++){
            int minm=i;
            for(int j=i+1;j<arr.length;j++)
                if(arr[j]<arr[minm])
                    minm = j;
            int t = arr[i];
            arr[i] = arr[minm];
            arr[minm] = t;
        }
    }
    public static void main(String[] args) {
        int arr[] = new int[]{12,23,45,4,24,27,-86,3,-67,24};
        System.out.println("Original Array : ");//display the original array
        for(int x : arr){
            System.out.print(x+" ");
        }
        //calling the method for selection sort
        selectionSort(arr);
        //printing the sorted array
        System.out.println("\nSorted Array : ");
        for(int x:arr){
            System.out.print(x+" ");
        }
    }
}