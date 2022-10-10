// Write a C program to find first and last digit of a number.
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int last_dig = num%10;
    int first_dig;
    while(num!=0){
        first_dig = num%10;
        num/=10;//num = num/10
    }
    printf("First Digit = %d\nLast Digit = %d",first_dig,last_dig);
    int sum = last_dig + first_dig;
    printf("\nSum = %d",sum);
    return 0;
}