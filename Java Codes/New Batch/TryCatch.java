import java.util.Scanner;

class TryCatch{
    public static void main(String[] args) {
        int[] arr = new int[]{1,2,3,4,0};
        int a,b;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        b = sc.nextInt();
        try{
            System.out.println(arr[a]/arr[b]);
        }
        catch(ArithmeticException e){
            System.out.println("Cannot divide by zero");
        }
        catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Element not found");
        }
        finally{
            System.out.println("It prints anyways");
        }
    }
}