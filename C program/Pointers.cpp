#include<stdio.h>
int main(){
    int num;//&num = 100
    num = 12;
    int *pointer;
    pointer = &num;//100
    printf("Value of num: %d",num);
    printf("\nValue at pointer: %d",*pointer);
    (*pointer)++;
    printf("\nValue of num: %d",num);
    return 0;
}