import java.util.Scanner;

class Solution {
    public static boolean isPalindrome(String s) {
        StringBuilder str = new StringBuilder();
        for(int i=0;i<s.length();i++){
            char c = Character.toLowerCase(s.charAt(i));
            if((c>='a' && c<='z') || (c>='0' && c<='9')){
                str.append(c);
            }
        }
        System.out.println(str);
        return str.toString().equals(str.reverse().toString());
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String in = sc.nextLine();
        System.out.println(isPalindrome(in));
    }
}