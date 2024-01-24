#include<stdio.h>
void decrement(int *p){
    *p = *p-1;
    printf("\nInside function value of a: %d",*p);
}
void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
int main(){
    int a = 15;
    int b = 10;
    // decrement(&a);
    printf("\nInside main function value of a: %d",a);
    printf("\n%d %d",a,b);
    swap(&a,&b);
    printf("\n%d %d",a,b);
    return 0;
}