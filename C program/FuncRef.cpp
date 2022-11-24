#include<stdio.h>
void swap(int *p,int *q){//int *p=&a;
    printf("\nAddress of a variable inside func: %u",p);
    int temp = *p;//*(&a)
    *p = *q;
    *q = temp;
}
int main(){
    int a = 10;
    int b = 5;
    printf("\nAddress of a variable: %u",&a);
    printf("\nValue before swapping: %d %d\n",a,b);
    // int temp = a;
    // a=b;
    // b=temp;
    swap(&a,&b);
    printf("\nValue after swapping: %d %d",a,b);
    return 0;
}