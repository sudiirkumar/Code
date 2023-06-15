#include<stdio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);//123
    int org_num = num;
    int rev=0;
    int digit;
    while(num!=0){
        digit = num%10;
        rev = rev*10 + digit;
        num = num/10;
    }
    printf("Reversed number of %d is %d",org_num,rev);//Reversed number of 123 is 321
    return 0;
}