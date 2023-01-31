#include<stdio.h>
int main()
{
	int a,b,rem,q;
	printf("Enter Divisor and Divident respectively, to get quotient and remainder");
	scanf("%d %d",&a,&b);
	q=a/b;
	rem=a%b;
	printf("\nThe quotient is %d",q);
	printf("\nThe remainder is %d",rem);
	return 0;
}
