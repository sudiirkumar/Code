#include<stdio.h>
int main()
{
	int sale;
	char area;
	float comm;
	printf("Enter area code : ");
	scanf("%c",&area);
	printf("\nEnter sale amount : ");
	scanf("%d",&sale);
	if((sale<1000&&area=='x')||(sale<1500&&area=='y')||(sale<1200&&area=='z'))
	{
		comm=sale*0.1;
		printf("Sale : %d  \nCommission : %.2f",sale,comm);
	}
	else
	    if((sale>=1000&&sale<5000&&area=='x')||(sale>=1500&&sale<7000&&area=='y')||(sale>=1200&&sale<6500&&area=='z'))
	    {
	    	comm=sale*0.12;
	    	printf("Sale : %d  \nCommission : %.2f",sale,comm);
		}
		else
		{
			comm=sale*0.15;
			printf("Sale : %d  \nCommission : %.2f",sale,comm);
		}
	return 0;	
}
