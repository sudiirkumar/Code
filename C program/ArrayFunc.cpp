#include<stdio.h>
int main(){
    int a[4];
    printf("Value of a: %u",a);
    printf("\nAddress of a[0]: %u",&a[0]);
    printf("\nAddress of a[1]: %u",&a[1]);
    printf("\nAddress of a[2]: %u",&a[2]);
    printf("\nAddress of a[3]: %u",&a[3]);
    return 0;
}