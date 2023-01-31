#include<stdio.h>
int main()
{
	int num,rem,i,n=0;
	printf("Enter a number : ");
	scanf("%d",&num);
	for(i=2;i<num;++i)
	{
		rem=num%i;
		if(rem==0)
		n=n+1;
	}
	if(n==0)
	printf("%d is a prime number.",num);
	else
	printf("%d is not a prime number.",num);
	return 0;
}
