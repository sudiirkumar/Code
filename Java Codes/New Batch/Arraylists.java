import java.util.ArrayList;

class Arraylists{
    public static void main(String[] args) {
        ArrayList<Integer> arr = new ArrayList<>();
        arr.add(12);
        arr.add(45);
        System.out.println(arr);
        arr.add(1,14);
        arr.add(2,95);
        System.out.println(arr);
        System.out.println(arr.size());
        int sum = 0;
        for(int i=0;i<arr.size();i++){
            sum += arr.get(i);
        }
        System.out.println(sum);
        arr.clear();
        System.out.println(arr);
    }
}