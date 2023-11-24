import java.util.Scanner;
public class Interest {
    public static void main(String[] args){
        int p;
        int r;
        int t;
        System.out.print("Enter principal, rate and time: ");
        Scanner sc = new Scanner(System.in);
        p = sc.nextInt();
        r = sc.nextInt();
        t = sc.nextInt();
        double si = (p*r*t)/100.0;
        double amount = p*Math.pow(1+(r/100.0),t);
        double ci = amount-p;
        System.out.println(si);
        System.out.println(amount);
        System.out.println(ci);
    }
}
//ci = 210
//si = 200