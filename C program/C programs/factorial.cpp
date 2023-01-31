#include<stdio.h>
int main()
{
	int num,fact=1,i;
	printf("Enter a number to find it's factorial : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("\nThe factorial is %d.",fact);
	return 0;
}
