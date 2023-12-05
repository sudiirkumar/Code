import java.lang.Math;
public class PrimeNumber {
    int n;
    System.out.println("Enter a number: ");
    Scanner sc = new Scanner(System.in);
    n = sc.nextInt();
    int i;
    for(i=2;i<=(int)(Math.sqrt(n));i++){
        if(num%i==0){
            break;
        }
    }
    if(i>(int)(Math.sqrt(n))){
        System.out.println("Prime number");
    }
    else{
        System.out.println("Not a prime number");
    }
}
