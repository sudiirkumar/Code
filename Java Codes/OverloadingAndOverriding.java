class ParentClass{
    public static void hey(){
        System.out.println("Hey! there");
    }
}
public class OverloadingAndOverriding extends ParentClass{
    public static void hey(){
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
    public static void main(String[] args) {
        // System.out.println(add(1,2));
        // System.out.println(add("1","2"));
        hey();
    }
}