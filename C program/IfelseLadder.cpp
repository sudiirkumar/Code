#include<stdio.h>
int main(){
    //number - even or odd
    //number - divisible or not
    //number - positive, negative or zero
    //2 nums - equal, greater, smaller
    //nums - div by 5, div by 11, div by both, div by none
    // int num1,num2;
    // printf("Enter 2 numbers: ");
    // scanf("%d%d",&num1,&num2);
    // if(num1==num2){
    //     printf("Equal");
    // }
    // else if(num1>num2){
    //     printf("Greater");
    // }
    // else{
    //     printf("Smaller");
    // }

    //Print week day for given day number

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n==1){
        printf("Monday");
    }
    else if(n==2){
        printf("Tuesday");
    }
    else if(n==3){
        printf("Wednesday");
    }
    else if(n==4){
        printf("Thursday");
    }
    else if(n==5){
        printf("Friday");
    }
    else if(n==6){
        printf("Saturday");
    }
    else if(n==7){
        printf("Sunday");
    }
    else {
        printf("Invalid input");
    }
    return 0;
}