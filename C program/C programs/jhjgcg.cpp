#include<stdio.h>
void add();
void sub();
void mul();
void div();
int main()
{
	int a,b;
	char oper;
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter Operation to do : ");
	scanf("%c",&oper);
	printf("Enter Second number : ");
	scanf("%d",&b);
	if(oper=='+')
	add();
	else if(oper=='-')
	sub();
	else if(oper=='*')
	mul();
	else if(oper=='/')
	div();
	else
	printf("Invalid Operator...");
	return 0;
}
void add()
{
	int a,b,sum=a+b;
	printf("The sum of %d and %d is %d",a,b,sum);
}
void sum()
{
	int a,b,sub=a-b;
	printf("The difference between %d and %d is %d ",a,b,sub);
}
void mul()
{
	int a,b,product=a*b;
	printf("The product of %d and %d is %d",a,b,product);
}
void div()
{
	int a,b;
	float result=a/b;
	printf("The quotient is %.2f",result); 
}
