#include<stdio.h>
int main(){
    int a,b;
    char op;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    printf("Enter operator (+,-,*,/,%%): ");
    fflush(stdin);
    scanf("%c",&op);
    switch(op){
        case '+':   printf("\nSum: %d",a+b);
                    break;
        case '-':   printf("\nDifference: %d",a-b);
                    break;
        case '*':   printf("\nProduct: %d",a*b);
                    break;
        case '/':   printf("\nIntegral Quotient: %d",a/b);
                    printf("\nReal Quotient: %f",1.0*a/b);
                    break;
        case '%':   printf("\nRemainder: %d",a%b);
                    break;
        default:    printf("\nInvalid input");
    }
    return 0;
}