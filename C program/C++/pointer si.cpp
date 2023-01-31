#include<stdio.h>
int main()
{
	int p,r,t,*a,*b,*c;
	float si;
	printf("Enter value of Principle : ");
	scanf("%d",&p);
	printf("Enter value of rate of interest : ");
	scanf("%d",&r);
	printf("Enter value of Time : ");
	scanf("%d",&t);
	a=&p;
	b=&r;
	c=&t;
	si=*a**b**c/100;
	printf("The value of SI is %.2f.",si);
	return 0;
}
