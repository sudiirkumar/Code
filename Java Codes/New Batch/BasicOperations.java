import java.lang.Math;
public class BasicOperations {
    public static void main(String[] args) {
        int a = 15;
        int b = 10;
        //Addition, Subtraction, Multiplication, Division(int, float), Modulo
        System.out.println("Sum = "+(a+b));//printf("Sum = %d",a+b) cout<<"Sum = "<<a+b
        System.out.println("sub = "+(a-b));
        System.out.println("div = "+(a/b));
        System.out.println("float_div = "+(a*1.0/b));
        System.out.println("multi = "+(a*b));
        System.out.println("modulo = "+(a%b));
        System.out.println(Math.pow(a, 2));
        System.out.println(Math.sqrt(a));
        System.out.println(Math.floor(a*1.0/b));
        System.out.println(Math.ceil(a*1.0/b));
        System.out.println(Math.max(a,b));
        System.out.println(Math.min(a,b));
        System.out.println((1.73/4)*a*a);
    }
}
