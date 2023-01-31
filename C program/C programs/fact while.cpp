#include<stdio.h>
int main()
{
	int i=1,fact,a;
	printf("Enter the number : ");
	scanf("%d",&a);
	while(i<=a)
	{
		fact=fact*i;
		i=i+1;
	}
	printf("The factorial of %d is %d.",a,fact);
	return 0;
}
