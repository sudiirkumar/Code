import java.util.Scanner;

class ReverseDigit{
    public static void main(String[] args) {
        long num;
        Scanner sc = new Scanner(System.in);
        num = sc.nextLong();
        // int rev = 0;
        // while(num>0){
        //     rev = rev*10 + (num%10);
        //     num /= 10;
        // }
        System.out.println("Reverse "+reverse(num));
    }
    public static long reverse(long n){
        long rev = 0;
        byte dig;
        while(n>0){
            dig = (byte)(n%10);
            rev = rev*10 + dig;
            n = n/10;
        }
        return rev;
    }
}