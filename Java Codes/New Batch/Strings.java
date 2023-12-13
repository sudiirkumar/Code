import java.util.Scanner;
public class Strings {
    public static void main(String args[]){
        String name;
        Scanner sc = new Scanner(System.in);
        name = sc.nextLine();
        StringBuilder ans = new StringBuilder();
        for(int i=0;i<name.length();i++){
            ans.append("1"+name.charAt(i));
        }
        System.out.println(name);
        System.out.println(ans.toString());
    }
}
