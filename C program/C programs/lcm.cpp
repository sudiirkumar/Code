#include<stdio.h>
int main()
{
	int i=1,max,n,n1,n2,min;
	printf("Enter two numbers : ");
	scanf("%d%d",&n1,&n2);
	max=(n1>n2)?n1:n2;
	min=(n1<n2)?n1:n2;
	n=max;
	do
	{
		n=max*i;
		i=i+1;
	}
	while(n%min!=0);
	printf("\nLCM : %d",n);
	return 0;
}
