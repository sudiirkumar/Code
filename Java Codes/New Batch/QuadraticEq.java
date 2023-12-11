import java.util.Scanner;
import java.lang.Math;
public class QuadraticEq {
    public static void main(String[] args) {
        int a,b,c;
        a = b = c = 0;
        System.out.print("Enter a, b and c: ");
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        int discriminant = (b*b) - 4*a*c;
        double x = 0;
        if(discriminant<0){
            // System.out.println("No real roots");
            discriminant = -discriminant;
            double y = 0;
            x = -b/(2*a*1.0);
            y = Math.sqrt(discriminant)/(2*a);
            System.out.println("Both complex roots are: ");
            System.out.print(x+" + "+y+"i\t");//-0.5 + 0.85i
            System.out.println(x+" - "+y+"i");//-0.5 - 0.85i
        }
        else if(discriminant==0){
            x = -b/(2*a*1.0);
            System.out.println("Equal roots: "+x);
        }
        else{
            x = (-b + Math.sqrt(discriminant))/(2*a);
            System.out.println("First root: "+x);
            x = (-b - Math.sqrt(discriminant))/(2*a);
            System.out.println("Second root: "+x);
        }
    }
}
