#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int fact = 1;
    int i;
    for(i = 1;i <= num; i++){
        fact = fact * i;
    }
    printf("Factorial of %d is %d.",num,fact);
    return 0;
}