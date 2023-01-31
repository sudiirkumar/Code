#include<math.h>
#include<stdio.h>
int main()
{
	int p,t;
	float r,total,amount;
	printf("Enter Principle amount, Rate of interest, and time duration");
	scanf("%d %f %d",&p,&r,&t);
	total=p*(1+r/100);
	amount=pow(total,t);
	printf("The amount for given time interval",amount);
	return 0;
}
