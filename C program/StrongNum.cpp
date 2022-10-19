//143 -> 1! + 4! + 3!
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int sum = 0;
    int temp = num;
    int digit;
    while(temp!=0){
        digit = temp%10;
        int factorial=1;
        for(int i=1;i<=digit;i++){
            factorial *= i;
        }
        sum += factorial;
    }
    if(sum==num){
        printf("It is Strong number");
    }
    else{
        printf("It is not an Strong number");
    }
    return 0;
}