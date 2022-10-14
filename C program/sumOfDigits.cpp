#include<stdio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);//543
    int sum=0;
    int product = 1;
    int digit;
    printf("Digits are : ");
    while(num!=0){
        digit = num%10;
        sum = sum + digit;
        product = product * digit;
        printf("%d ",digit);
        num = num/10;
    }
    printf("\nSum of digits is %d.",sum);
    printf("\nProduct of digits is %d.",product);
    return 0;
}