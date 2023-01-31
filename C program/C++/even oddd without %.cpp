#include<stdio.h>
int main()
{
	int num,a;
	printf("Enter a number : ");
	scanf("%d",&num);
	a=num/2;
	a=a*2;
	if(a==num)
	printf("%d is an even number.",num);
	else
	printf("%d is an odd number.",num);
	return 0;
}
