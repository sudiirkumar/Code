#include<stdio.h>
int main()
{
	int sale;
	float com;
	printf("Enter sales for the day :  ");
	scanf("%d",&sale);
	if(sale<=100)
	com=0;
	else
	    if(sale>100&&sale<1000)
	    com=(sale)*0.1;
	    else
	        if(sale>=1000)
	        com=100+(sale-1000)*0.08;
	        else
	        com=0.125*sale;
	printf("The commission is %.1f.",com);
	return 0;        
}
