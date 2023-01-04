#include<stdio.h>
#include<stdlib.h>
int main(){
    int num1,num2;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&num1,&num2);
    int ldig = num2%10;
    int fdig = num2/10;
    long int product = num1 * num2;
    system("cls");
    printf("\n%20d",num1);
    printf("\n%20d",num2);
    printf("\n                ----");//16 spaces
    printf("\n%-3dx%2d is       %4d",num1,ldig,num1*ldig);//15
    printf("\n%-3dx%2d is       %3dx",num1,fdig,num1*fdig);
    printf("\n                ----");//11 spaces
    printf("\nAdd them        %4ld",product);
    printf("\n                ----");//11 spaces
    return 0;
}