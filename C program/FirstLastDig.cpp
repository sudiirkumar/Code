// Write a C program to find first and last digit of a number.
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);//123
    int last_dig = num%10;
    int first_dig = 0;
    // while(num!=0){
    //     digit = num%10;
    //     num/=10;//num = num/10
    // }
    while(num!=0){
        if(num<10){
            first_dig = num;
            break;
        }
        num /= 10;
    }
    printf("First Digit = %d\nLast Digit = %d",first_dig,last_dig);
    int sum = last_dig + first_dig;
    printf("\nSum = %d",sum);
    return 0;
}