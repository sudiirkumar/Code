import java.util.Scanner;

class Vectors{
    public static void main(String[] args) {
        int a[] = new int[3];//(4,5,6)
        int b[] = new int[3];//(1,2,3)
        System.out.print("Enter first vector's components: ");
        Scanner sc = new Scanner(System.in);
        for(int i=0;i<3;i++){
            a[i] = sc.nextInt();
        }
        System.out.print("Enter second vector's components: ");
        for(int i=0;i<3;i++){
            b[i] = sc.nextInt();
        }
        int sum[] = new int[3];//(5,7,9) //sum[0] = a[0] + b[0]   sum[1] = a[1] + b[1]
        int diff[] = new int[3];
        int dot_product = 0;
        for(int i=0;i<3;i++){
            sum[i] = a[i] + b[i];
            diff[i] = a[i] - b[i];
            dot_product += a[i]*b[i];
        }
        System.out.print("Sum of vectors: ");
        for(int x : sum)
            System.out.print(x+" ");
        System.out.print("\nDiff of vectors: ");
        for(int x : diff)
            System.out.print(x+" ");
        System.out.print("\nDot product of vectors: "+dot_product);
    }
}