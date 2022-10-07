#include<stdio.h>
int main(){
    int num ;
    printf("Enter a number : ");
    scanf("%d",&num);
    int lastDig = num%10;
    printf("The last of %d is %d",num,lastDig);
    return 0;
}