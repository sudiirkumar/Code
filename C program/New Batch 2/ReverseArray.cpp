#include<stdio.h>
int main(){
    int a[5] = {10,20,30,40,50};
    int temp;
    printf("\nOriginal array: \n");
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    for(int i=0;i<=5/2;i++){
        printf("\nSwapping %d and %d ",a[i],a[5-i-1]);
        temp = a[i];
        a[i] = a[5-i-1];
        a[5-i-1] = temp;
    }
    printf("\nReversed array: \n");
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    return 0;
}