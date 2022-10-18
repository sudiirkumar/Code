#include<stdio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int temp = num;
    int digit;
    int sum = 0;
    while(temp!=0){
        digit = temp%10;
        sum = sum + (digit*digit*digit);
        temp /= 10;
    }
    if(sum==num){
        printf("%d is an Armstrong number.",num);
    }
    else{
        printf("%d is not an Armstrong number.",num);
    }
    return 0;
}