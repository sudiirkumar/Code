#include<stdio.h>
int main()
{
	int a,d,n;
	printf("Enter the first term of AP : ");
	scanf("%d",&a);
	int sum=a;
	printf("Enter common difference of AP : ");
	scanf("%d",&d);
	printf("Enter number of term of AP : ");
	scanf("%d",&n);
	printf("The AP is ");
	for(int i=1;i<=n;i++)
	{
		a=a+d;
		printf("%d ",a-d);
	}
	for(int i=1;i<=n;i++)
	{
		sum=sum+d;
	}
	printf("\n\nThe sum of terms of the given AP is : %d",sum);
	return 0;
}
