#include<stdio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);//123
    int rev=0;
    int temp=num;
    int digit;
    while(temp!=0){
        digit = temp%10;
        rev = rev*10 + digit;
        temp = temp/10;
    }
    printf("Reversed number of %d is %d",num,rev);//Reversed number of 123 is 321
    return 0;
}