#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    n = abs(n);
    int dig;
    while(n>0){
        dig = n%10;
        printf("%d ",dig);
        n /= 10;// n = n/10
    }
    return 0;
}