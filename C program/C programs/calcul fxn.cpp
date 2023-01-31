#include<stdio.h>
float res;
void add(float,float);
void sub(float,float);
void mul(float,float);
void div(float,float);
int main()
{
	float a,b;
	printf("Enter first number : ");
	scanf("%f",&a);
	printf("Enter second number : ");
	scanf("%f",&b);
	add(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
	return 0;
}
void add(float a,float b)
{
	res=a+b;
	printf("\nSum = %f",res);
}
void sub(float a,float b)
{
	res=a-b;
	printf("\nDifference = %f",res);
}
void mul(float a,float b)
{
	res=a*b;
	printf("\nProduct = %f",res);
}
void div(float a,float b)
{
	res=a/b;
	printf("\nQuotient = %f",res);
}
