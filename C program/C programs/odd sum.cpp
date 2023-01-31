#include<stdio.h>
int main()
{
	int num,sum=0,i=1;
	printf("Enter number of consecutive odd to add : ");
	scanf("%d",&num);
	while(i<=num)
	{
		sum=sum+i;
		i=i+2;
	}
	printf("The sum is %d",sum);
	return 0;
}
