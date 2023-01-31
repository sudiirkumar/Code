#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers to find out which one is greater : ");
	scanf("%d%d",&a,&b);
	if(a>b)
	printf("%d is greater than %d.",a,b);
	else
	if(a=b)
	printf("%d is equal to %d.",b,a);
	else
	printf("%d is greater than %d.",b,a);
	return 0;
}
