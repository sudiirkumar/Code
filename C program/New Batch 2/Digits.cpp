#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int ldig = num%10;
    int fdig;
    int sum = 0;
    int product = 1;
    int count = 0;
    while(num>0){
        fdig = num%10;
        sum += fdig;//sum = sum + ldig
        product *= fdig;
        count++;
        printf("%d ",fdig);
        num /= 10;//num = num/10;
    }
    printf("\nCount of digits: %d",count);
    printf("\nSum of digits: %d",sum);
    printf("\nProduct of digits: %d",product);
    printf("\nFirst digit = %d and last digit = %d",fdig,ldig);
    printf("\nSum of first digit and last digit = %d",fdig+ldig);
    return 0;
}