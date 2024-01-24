import java.util.ArrayList;

interface Sum{
    int square(int n);
}
public class LambdaExpression {
    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<>();
        list.add(10);
        list.add(13);
        list.add(16);
        list.add(19);
        list.add(223);
        list.add(53);
        list.add(12);

        list.forEach(n -> System.out.println(n));
    }
    public static int sum(int a,int b){
        return a+b;
    }
    // (a,b) -> a+b
}