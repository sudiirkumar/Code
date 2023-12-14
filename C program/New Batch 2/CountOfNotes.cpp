#include<stdio.h>
int main(){
    int amount;
    printf("Enter amount: ");
    scanf("%d",&amount);
    int count_500 = 0;
    int count_200 = 0;
    int count_100 = 0;
    int count_50 = 0;
    if(amount>=500){
        count_500 = amount/500;
        amount = amount%500;
    }
    if(amount>=200){
        count_200 = amount/200;
        amount = amount%200;
    }
    if(amount>=100){
        count_100 = amount/100;
        amount = amount%100;
    }
    if(amount>=50){
        count_50 = amount/50;
        amount = amount%50;
    }
    if(amount>0){
        printf("\nRemaining amount: %d",amount);
    }
    printf("\nCount of 500 notes: \t%2d",count_500);
    printf("\nCount of 200 notes: \t%2d",count_200);
    printf("\nCount of 100 notes: \t%2d",count_100);
    printf("\nCount of 50 notes: \t%2d",count_50);
    return 0;
}