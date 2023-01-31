#include<stdio.h>
int main()
{
	int a,b,i,res=1;
	printf("Enter a number : ");
	scanf("%d",&a);
	printf("\nEnter the exponent : ");
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{
		res=res*a;
	}
	printf("Answer : %d",res);
	return 0;
}
