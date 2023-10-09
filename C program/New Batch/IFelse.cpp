//check greater between 2 non equal numbers
// positive negative for non zero numbers
// even or odd
#include<stdio.h>
int main(){
    //greater number
    int a;
    int b;
    printf("\nEnter 2 numbers: ");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("\nA is greater");
    }
    else{
        printf("\nB is greater");
    }

    //positive negative
    // int num;
    // printf("\nEnter a number: ");
    // scanf("%d",&num);
    if(a>0){
        printf("\nNumber is positive");
    }
    else{
        printf("\nNumber is negative");
    }

    //even odd
    // printf("\nEnter a number: ");
    // scanf("%d",&num);
    if(a%2==0){
        printf("\nEven number");
    }
    else{
        printf("\nOdd number");
    }
    return 0;
}