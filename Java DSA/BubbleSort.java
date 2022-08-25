public class BubbleSort{
    public static void bubbleSort(int arr[]){
        for(int i=1;i<arr.length;i++)//the number of times we need to sort
            for(int j=0;j<arr.length-i;j++)//the iteration to take the largest element to the right most
                if(arr[j]>arr[j+1]){//check if the number is greater than next element
                    int t=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=t;
                }
    }
    public static void main(String[] args) {
        int arr[] = new int[]{12,23,45,4,24,27,-86,3,-67,24};
        System.out.println("Original Array : ");//display the original array
        for(int x : arr){
            System.out.print(x+" ");
        }
        //calling the method for bubble sort
        bubbleSort(arr);
        //printing the sorted array
        System.out.println("\nSorted Array : ");
        for(int x:arr){
            System.out.print(x+" ");
        }
    }
}