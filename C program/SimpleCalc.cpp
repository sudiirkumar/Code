#include <stdio.h>
int main(){
	int a,b;
	printf("Enter 2 numbers: ");
	scanf("%d%d",&a,&b);
	char operation;
	printf("Enter a character: ");
	fflush(stdin);
	scanf("%c",&operation);
	switch(operation){
	case '+':	printf("Sum: %d",a+b);
				break;
	case '-':	printf("Difference: %d",a-b);
				break;
	case '*':	printf("Product: %d",a*b);
				break;
	case '/':	printf("Quotient: %d",a/b);
				break;
	case '%':	printf("Remainder: %d",a%b);
				break;
	default:	printf("Invalid input");
	}
	return 0;
}