#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,ci,amount;
	printf("Enter value of principle :  ");
	scanf("%f",&p);
	printf("\nEnter value of rate of interest :  ");
	scanf("%f",&r);
	printf("\nEnter value of time period :  ");
	scanf("%f",&t);
	amount=p*pow((100+r)/100,t);
	ci=amount-p;
	printf("\nThe value of amounnt for %.1f years is  Rs. %.2f",t,amount);
	printf("\n\nThe value of Compound interest is Rs. %.2f",ci);
	printf("\n\n\n\n\n\n\nTHANKS FOR USING");
	return 0;
}
