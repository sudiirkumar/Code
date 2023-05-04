#include<stdio.h>
int main(){
    int a;//declaration
    a = 149;//initialisation
    int b = 150;//declaration and initialisation
    int sum;
    sum = a + b;
    printf("\nSum of %d and %d is %d.",a,b,sum);
    int difference;
    difference = a-b;
    printf("\nDifference of %d and %d is %d.",a,b,difference);
    int product;
    product = a*b;
    printf("\nProduct of %d and %d is %d.",a,b,product);
    int quotient;
    quotient = a/b;
    printf("\nQuotient of %d and %d is %d.",a,b,quotient);
    int remainder;
    remainder = a%b;
    printf("\nRemainder of %d and %d is %d.",a,b,remainder);
    return 0;
}