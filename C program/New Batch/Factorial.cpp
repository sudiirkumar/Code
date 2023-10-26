#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int fact=1;
    for(int i=1;i<=num;i++){
        // fact = fact*i;
        fact *= i;
    }
    printf("Factorial: %d",fact);
    return 0;
}