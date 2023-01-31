#include<stdio.h>
int main()
{
	int cm;
	float m;
	printf("Enter the value in cm to convert it into metres");
	scanf("%d",&cm);
	m=cm/100;
	printf("The value is %.2f",m);
	return 0;
}
