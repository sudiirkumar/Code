#include<stdio.h>
int main(){
    int a = 10, b = 3;
    
    int sum = a+b;
    int diff = a-b;
    int product = a*b;
    int quotient = a/b;
    int remainder = a%b;

    printf("\nSum = \t\t%d",sum);
    printf("\nDifference = \t%d",diff);
    printf("\nProduct = \t%d",product);
    printf("\nQuotient = \t%d",quotient);
    printf("\nRemainder = \t%d",remainder);
    return 0;
}