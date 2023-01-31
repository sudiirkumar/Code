#include<stdio.h>
int main()
{
	int in;
	float cm;
	printf("Enter value in inches to convert it into cm");
	scanf("%d",&in);
	cm=in*2.5;
	printf("The value in Cm is %.2f",cm);
	return 0;
}
