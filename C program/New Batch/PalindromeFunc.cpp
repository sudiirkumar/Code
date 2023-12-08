#include<stdio.h>
int reverse(int num){
    int rev = 0;
    while(num>0){
        rev = rev*10 + (num%10);
        num /= 10;
    }
    return rev;
}
int isPalindrome(int num){
    if(num>=0 && num<=9)    return 1;
    if(num==reverse(num))
        return 1;
    return 0;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(isPalindrome(num)){
        printf("Yes it is a palindrome number");
    }
    else{
        printf("No, it is not a palindrome number");
    }
    return 0;
}