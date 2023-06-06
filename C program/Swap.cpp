#include<stdio.h>
int main(){
    int a = 10, b = 5;

    //Using temp variable
    // printf("Values before swapping: %d %d",a,b);
    // int t = a;
    // a = b;
    // b = t;
    // printf("\nValues after swapping: %d %d",a,b);

    //Without using extra variable
    // printf("Values before swapping: %d %d",a,b);
    // a = a+b;
    // b = a-b;
    // a = a-b;
    // printf("\nValues after swapping: %d %d",a,b);

    //Using bitwise operator
    printf("Values before swapping: %d %d",a,b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("\nValues after swapping: %d %d",a,b);
    return 0;
}