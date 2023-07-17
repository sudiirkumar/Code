#include<stdio.h>
void swap_call_by_value(int a,int b){
    int t = a;
    a = b;
    b = t;
    printf("Values inside function: %d %d\n",a,b);
}
void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
int main(){
    int a = 10;
    int b = 7;
    printf("Before swap: %d %d\n",a,b);
    // swap_call_by_value(a,b);
    swap(&a,&b);
    printf("After swap: %d %d\n",a,b);
    return 0;
}