#include<stdio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int sum=0;
    while(num!=0){
        sum = sum + num%10;
        printf("%d ",num%10);
        num = num/10;
    }
    printf("\nSum of digits is %d",sum);
    return 0;
}