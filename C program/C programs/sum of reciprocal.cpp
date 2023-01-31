#include<stdio.h>
int main()
{
	int i=1,n;
	float term,sum=0;
	printf("Enter number of terms to add : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		term=float(1)/i;
		sum+=term;
	}
	printf("Sum : %f",sum);
	return 0;
}
