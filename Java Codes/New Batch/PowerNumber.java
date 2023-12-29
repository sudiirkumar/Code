import java.util.Scanner;

class PowerNumber{
    public static int power(int base, int exp){
        int ans = 1;
        for(int i=1;i<=exp;i++){
            ans = ans*base;
        }
        return ans;
    }
    public static void main(String[] args) {
        int base,exp;
        Scanner sc = new Scanner(System.in);
        base = sc.nextInt();
        exp = sc.nextInt();
        // System.out.println(Math.pow(base, exp));
        System.out.println(power(base, exp));
    }
}