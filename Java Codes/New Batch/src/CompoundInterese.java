import java.util.Scanner;

public class CompoundInterese {
    public static void main(String[] args) {
        int principle;
        int rate;
        int time;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter principle, rate and time: ");
        principle = sc.nextInt();
        rate = sc.nextInt();
        time = sc.nextInt();

        double si = principle*rate*time/100.0;
        double amount = principle*Math.pow(1+(rate/100.0),time);
        double ci = amount-principle;

        System.out.println("Compound interest: "+ci);
        System.out.println("Amount: "+amount);
        System.out.println("Simple interest: "+si);
    }
}
