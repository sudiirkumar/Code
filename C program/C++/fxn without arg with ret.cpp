#include<stdio.h>
int sum();
int main()
{
	int result;
	printf("\nGoing to calculate sum of two numbers : ");
	result=sum();
	printf("%d",result);
}
int sum()
{
	int a,b;
	printf("\nEnter two numbers : ");
	scanf("%d%d",&a,&b);
	return a+b;
}
