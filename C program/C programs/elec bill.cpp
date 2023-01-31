#include<stdio.h>
int main()
{
	int unit,cn;
	float charge;
	printf("Enter customer number : ");
	scanf("%d",&cn);
	printf("Enter energy used in units : ");
	scanf("%d",&unit);
	if(unit<=200)
	charge=unit*0.50;
	else
	    if(unit>200&&unit<=400)
	    charge=100+(unit-200)*0.65;
	    else
	        if(unit>400&&unit<=600)
	        charge=230+(unit-400)*0.8;
	        else
	        charge=390+(unit-600);
	printf("Customer no.: %d \nBill amount : %.2f",cn,charge);
	return 0;        
}
