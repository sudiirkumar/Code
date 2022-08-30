import java.util.*;
public class PushAtBottom{
    static Stack<Integer> s = new Stack<>();
    public static void pushAtBottom(int data){
        if(s.empty()){
            s.push(data);
            return;
        }
        int temp = s.pop();
        pushAtBottom(data);
        s.push(temp);
        return;
    }
    public static void main(String[] args) {
        s.push(1);
        s.push(2);
        s.push(3);
        pushAtBottom(4);
        System.out.println(s);
    }
}