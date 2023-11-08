#include<stdio.h>
int main(){
    int num;//1234
    printf("Enter a number: ");
    scanf("%d",&num);
    int n = num;//121
    int rev=0;//4321
    while(num>0){
        rev = rev*10 + (num%10);
        num /= 10;
    }
    printf("Reverse: %d\n",rev);
    if(rev==n){
        printf("\nPalindrome");
    }
    else{
        printf("\nNon Palindrome");
    }
    return 0;
}