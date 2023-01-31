#include<stdio.h>
int main()
{
	int n,i=1,f=1;
	printf("Enter a number : ");
	scanf("%d",&n);
	while(i<=n)
	{
		f*=i;
		i++;
	}
	printf("The factorial of %d is %d",n,f);
	return 0;
}
