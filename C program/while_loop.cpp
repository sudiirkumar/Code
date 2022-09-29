#include<stdio.h>// 1 2 4 8 16 32 64
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);//n=10
    int i=11;//initialise
    while(i<=n){//11<=10
        printf("%d ",i);
        i++;//increment/decrement
    }
    return 0;
}