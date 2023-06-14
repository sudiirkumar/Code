#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int ldig = n%10;
    while(n>=10){
        n /= 10;
    }
    printf("First Digit: %d\nLast Digit: %d",n,ldig);
    printf("\nSum of first and last digit: %d",n+ldig);
    return 0;
}