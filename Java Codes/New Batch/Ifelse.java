import java.lang.Math;
import java.util.Scanner;
public class Ifelse {
    public static void main(String[] args) {
        int a;
        int b;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter 2 numbers: ");
        a = sc.nextInt();
        b = sc.nextInt();
        if(a>b){
            System.out.println("A is greater");
        }
        else{
            System.out.println("B is greater");
        }
    }
}
