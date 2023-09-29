// Find the sum of first 'n' natural numbers => 1+2+3+4+....n numbers => n(n+1)/2
// Find the sum of square of first 'n' natural numbers => 1^2+2^2+3^2+4^2+....n numbers => n(n+1)(2n+1)/6
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of natural numbers to calculate its sum: ");
    scanf("%d",&n);
    int sum = n*(n+1)/2;
    printf("Sum of %d natural numbers is: %d",n,sum);
    return 0;
}