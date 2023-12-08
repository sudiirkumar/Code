import java.util.Scanner;

class ThirdAngle{
    public static void main(String[] args) {
        int angle_A = 0, angle_B = 0;
        System.out.println("Enter 2 angles: ");
        Scanner sc = new Scanner(System.in);
        angle_A = sc.nextInt();
        angle_B = sc.nextInt();
        int angle_c = 180 - (angle_A+angle_B);
        System.out.println("Third angle is "+angle_c);
    }
}