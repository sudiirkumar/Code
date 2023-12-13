import java.util.Scanner;

class GrossSalary{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int basicSalary = 0;
        int hra = 0;
        int da = 0;
        basicSalary = sc.nextInt();
        if(basicSalary<=10000){
            hra = 20*basicSalary/100;
            da = 80*basicSalary/100;
        }
        else if(basicSalary<=20000){
            hra = 25*basicSalary/100;
            da = 90*basicSalary/100;
        }
        else{
            hra = 30*basicSalary/100;
            da = 95*basicSalary/100;
        }
        int totalSalary = basicSalary + hra + da;
        System.out.println("Basic Salary: "+basicSalary);
        System.out.println("HRA: "+hra);
        System.out.println("DA: "+da);
        System.out.println("Total salary: "+totalSalary);
    }
}