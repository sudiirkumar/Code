// Program to create a simple calculator
#include <stdio.h>

int main() {
    char op;
    double n1, n2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%lf %lf",&n1, &n2);

    switch(op)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
            break;


        case '-':
            printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
        break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
          break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
            break;
  

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
            break;
    }

    return 0;
}
\
