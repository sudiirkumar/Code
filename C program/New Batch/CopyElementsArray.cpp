#include<stdio.h>
int main(){
    int arr[5] = {12,43,12,90,1};
    int b[5];
    for(int i=0;i<5;i++){
        b[i] = arr[i];
    }
    printf("Original arr: \n");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    printf("\nCopy arr: \n");
    for(int i=0;i<5;i++){
        printf("%d ",b[i]);
    }
    return 0;
}