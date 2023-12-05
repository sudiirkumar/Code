import java.util.Scanner;
class Pattern1{
	public static void main(String[] args) {
		int n;
		System.out.print("Enter a number: ");
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		for(int i=0;i<n;i++){
			for(int j=0;j<i+1;j++){
				System.out.print("* ");
			}
			System.out.println();
		}
	}
}