#include<stdio.h>
int a,b;
void sum();
int main()
{
	a=3;
	b=3;
	sum();
	return 0;
}
void sum()
{
	printf("Sum = %d",a+b);
}
