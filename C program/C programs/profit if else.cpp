#include<stdio.h>
int main()
{
	int cp,sp,profit,loss;
	printf("Enter Cost price and Selling price of the product");
	scanf("%d %d",&cp,&sp);
	profit=sp-cp;
	loss=cp-sp;
	if(profit>0)
	printf("There had been a gain of %d.",profit);
	else
	if(loss>0)
	printf("There had been a loss of %d.",loss);
	else
	printf("There is neither a gain or a loss.");
}
