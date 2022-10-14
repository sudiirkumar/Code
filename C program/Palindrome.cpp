#include<stdio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);//123
    int rev=0;
    int temp = num;
    int digit;
    while(temp!=0){
        digit = temp%10;
        rev = rev*10 + digit;
        temp = temp/10;
    }
    printf("Reverse number : %d\n",rev);
    if(rev==num){
        printf("It is a palindromic number");
    }
    else{
        printf("It is not a palindromic number");
    }
    return 0;
}