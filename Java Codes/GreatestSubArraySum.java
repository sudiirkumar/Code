class GreatestSubArraySum{
    public static void main(String[] args){
        int[] arr = {-2, -3, 4, -1, -2, 1, 5, -3};
        int n = arr.length;
        int max_so_far = Integer.MIN_VALUE;
        int max_ending_here = 0;
        for(int i=0; i<n; i++){
            max_ending_here = max_ending_here + arr[i];
            if(max_ending_here < 0){
                max_ending_here = 0;
            }
            if(max_so_far < max_ending_here){
                max_so_far = max_ending_here;
            }
        }
        System.out.println(max_so_far);
    }
}