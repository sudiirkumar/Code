#include<stdio.h>
int main(){
    int n,i;
    printf("Enter a number : ");
    scanf("%d",&n);
    int sum = 0;//1 2 3 4 5
    for(i=1;i<=n;i++){
        sum = sum + i;
    }
    printf("Sum is %d",sum);
    return 0;
}