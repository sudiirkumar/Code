#include<stdio.h>// 1 2 4 8 16 32 64
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);//n=100
    int i=1;//initialise
    while(i<=n){//condition
        printf("%d ",i);
        i = i*2;//increment/decrement
    }
    return 0;
}