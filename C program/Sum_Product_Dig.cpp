#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int sum = 0, product = 1;
    int dig;
    while(num>0){
        dig = num%10;
        sum += dig;
        product *= dig;
        num /= 10;
    }
    printf("Sum of digits: %d",sum);
    printf("\nProduct of digits: %d",product);
    return 0;
}