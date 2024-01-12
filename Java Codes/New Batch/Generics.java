class Generics{
    public static <T> int linearSearch(T[] arr, T key){
        for(int i=0;i<arr.length;i++){
            if(arr[i]==key){
                return i;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        int[] arr = new int[]{1,2,3,4,5};
        int key = 3;
        System.out.println(linearSearch<>(arr, key));
    }
}