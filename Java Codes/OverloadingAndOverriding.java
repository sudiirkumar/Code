import java.util.*;
class ParentClass{
    public void hey(){
        System.out.println("Hey! there");
    }
    public int discountedPrice(int price){
        return 95*price/100;
    }
}
public class OverloadingAndOverriding extends ParentClass{
    public int discountedPrice(int price){
        return 90*price/100;
    }
    public void hey(){
        System.out.println("Hello! there");
    }
    public static int sum(int a,int b){
        return a+b;
    }
    public static int sum(int a,int b,int c){
        return a+b+c;
    }
    public static int add(int a,int b){
        return a+b;
    }
    public static String add(String a,String b){
        return a+b;
    }
    public int totalPrice(){
        return super.discountedPrice(100)+20;
    }
    public static void main(String[] args) {
        // System.out.println(sum(1,2));
        // System.out.println(sum(1,2,3));
        // System.out.println(add(1,2));
        // System.out.println(add("A","B"));
        // OverloadingAndOverriding obj = new OverloadingAndOverriding();
        // System.out.println(obj.totalPrice());
        System.out.println(Math.sqrt(4));
    }
}