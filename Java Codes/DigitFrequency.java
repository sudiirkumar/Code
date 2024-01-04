import java.util.Scanner;

public class DigitFrequency {
    public static void main(String[] args) {
        int[] count = new int[10];
        int num;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        num = sc.nextInt();
        int dig = 0;
        while(num>0){
            dig = num % 10;
            count[dig]++;
            num /= 10;
        }
        for(int i=0;i<10;i++){
            System.out.println("Number of "+i+"s is: "+count[i]);
        }
    }
}
