#include<stdio.h>
int main()
{
	int n,sum;
	printf("Enter number of natural numbers to add : ");
	scanf("%d",&n);
	sum=n*(n+1)/2;
	printf("The sum of %d natural numbers is %d.",n,sum);
	return 0;
}
