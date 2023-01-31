#include<stdio.h>
int main()
{
	int n=1;
	float sum=0;
	float term=1;
	printf("Enter number of terms to add : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		term=1.00/i;
		sum+=term;
	}
	printf("Sum = %f",sum);
	return 0;
}

