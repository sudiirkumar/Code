#include<stdio.h>
int main(){
    int n=1;
    int count=0;
    while(n<1000000){
        printf("%d ",n);
        count++;
        n *= 2;//n = n*2
    }
    printf("\nCount of numbers: %d",count);
    return 0;
}