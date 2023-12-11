import java.util.Scanner;

class PalindromeFunction{
    public static int reverse(int num){
        int rev = 0;
        while(num>0){
            rev = rev*10 + (num%10);
            num /= 10;
        }
        return rev;
    }
    public static boolean isPalindrome(int num){
        if(num>=0 && num<=9){
            return true;
        }
        if(reverse(num)==num){
            return true;
        }
        return false;
    }
    public static void main(String[] args) {
        int num;
        System.out.println("Enter a number: ");
        Scanner sc = new Scanner(System.in);
        num = sc.nextInt();
        System.out.println(isPalindrome(num));
    }
}