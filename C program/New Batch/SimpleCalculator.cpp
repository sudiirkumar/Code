//Take input 2 values a and b and take input an operation.
// Apply the operation to get the output.
#include<stdio.h>
int main(){
    int a,b;
    char ch;
    printf("Enter equation: ");
    scanf("%d",&a);
    fflush(stdin);
    scanf("%c",&ch);
    scanf("%d",&b);
    switch(ch){
        case '+':
            printf("Sum = %d",a+b);
            break;
        case '-':
            printf("Diff = %d",a-b);
            break;
        case '*':
            printf("Product = %d",a*b);
            break;
        case '/':
            printf("Quotient = %d",a/b);
            break;
        case '%':
            printf("Remainder = %d",a%b);
            break;
        default: printf("Wrong input");
    }
    // if(ch=='+'){
    //     printf("Sum = %d",a+b);
    // }
    // else if(ch=='-'){
    //     printf("Diff = %d",a-b);
    // }
    // else if(ch=='*'){
    //     printf("Product = %d",a*b);
    // }
    // else if(ch=='/'){
    //     printf("Quotient = %d",a/b);
    // }
    // else if(ch=='%'){
    //     printf("Remainder = %d",a%b);
    // }
    return 0;
}