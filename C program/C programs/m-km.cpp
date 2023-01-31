#include<stdio.h>
int main()
{
	float m,km;
	printf("Enter the value in m to convert into km");
	scanf("%f",&m);
	km=m/1000;
	printf("The value in km is %.2f",km);
	return 0;
}
