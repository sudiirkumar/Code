public class PrefixSum{
    public static int prefixSum(int arr[]){
        int prefix[] = new int[arr.length];
        int subSum;
        int maxm=Integer.MIN_VALUE;
        prefix[0] = arr[0];
        for(int i=1;i<arr.length;i++){
            prefix[i] = prefix[i-1] + arr[i];
        }
        for(int i=0;i<arr.length;i++){
            for(int j=i;j<arr.length;j++){
                subSum = i>0 ? prefix[j]-prefix[i-1]:prefix[j];
                maxm = Integer.max(maxm, subSum);
            }
        }
        return maxm;
    }
    public static void main(String[] args) {
        int arr[] = new int[]{1,6,2,-6,2,-4};
        System.out.print("\nThe array is : ");
        for(int x : arr){
            System.out.print(x+" ");
        }
        System.out.println("\nThe maximum sub-array sum is : "+prefixSum(arr));
    }
}