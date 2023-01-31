#include<stdio.h>
#define accuracy 0.001
int main()
{
	float x,term=1,sum=0;
	int n=1,count=1;
	printf("Enter value of x : ");
	scanf("%f",&x);
	while(n<=100)
	{
		term=term*x/n;
		count=count+1;
		sum=sum+term;
		if(term<accuracy)
		n=999;
		else
		n=n+1;
	}
	printf("Terms = %d | Sum = %f",count,sum);
	return 0;
}
