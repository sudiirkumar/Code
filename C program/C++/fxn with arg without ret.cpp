#include<stdio.h>
void sum(int,int);
int main()
{
	int a,b,result;
	printf("\nGoing to calculate sum of to numbers...");
	printf("\nEnter two numbers : ");
	scanf("%d%d",&a,&b);
	sum(a,b);
}
void sum(int a,int b)
{
	printf("The sum is %d",a+b);
}
