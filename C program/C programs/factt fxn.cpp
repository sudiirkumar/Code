#include<stdio.h>
int fact(int);
int main()
{
	int x,res;
	printf("Enter number to find it's factorial : ");
	scanf("%d",&x);
	res=fact(x);
	printf("Factorial = %d",res);
	return 0;
}
int fact(int a)
{
	int fact=1;
	for(int i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	return fact;
}
