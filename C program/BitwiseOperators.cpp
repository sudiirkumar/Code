/*
a & b - AND
a | b - OR
a ^ b - XOR
a << n - Left Shift
a >> n - Right Shift
~ a - Compliment
*/
#include<stdio.h>
int main(){
    int a = 7;
    int b = 9;
    printf("\nAND - %d",a&b);
    printf("\nOR - %d",a|b);
    printf("\nXOR - %d",a^b);
    printf("\nLeft Shift - %d",a<<2);
    printf("\nRight Shift - %d",a>>2);
    printf("\nComplement - %d",~b);
    return 0;
}