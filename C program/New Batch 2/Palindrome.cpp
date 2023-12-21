#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int org_num = num;
    int rev = 0;
    while(num>0){
        rev = rev*10 + (num%10);
        num /= 10;
    }
    printf("\nReverse of number: %d",rev);
    if(rev==org_num){
        printf("\nYes it is a palindrome number");
    }
    else{
        printf("\nNo it is not a palindrome number");
    }
    return 0;
}