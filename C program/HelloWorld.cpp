#include<stdio.h>
int main(){
    int a = 10;
    int b;
    b = 20;
    int sum = a+b;
    printf("Sum: %d",sum);
    int diff = a-b;
    printf("Diff: %d",diff);
    int product = a*b;
    printf("Product: %d",product);
    int quotient = a/b;
    printf("Quotient: %d",quotient);
    int remainder = a%b;
    printf("Remainder: %d",remainder);
    return 0;
}