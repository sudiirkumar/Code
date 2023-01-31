#include<stdio.h>
int main()
{
	int pmr,cmr,unit,bill;
	char cn[10];
	printf("Enter consumer number :  ");
	scanf("%s",&cn);
	printf("\nEnter Previous month reading : ");
	scanf("%d",&pmr);
	printf("\nEnter Current month readin :  ");
	scanf("%d",&cmr);
	unit=cmr-pmr;
	bill=unit*7;
	printf("\n-------------------------------------------------------");
	printf("\nYour consumer number : %s",cn);
	printf("\nYour Electricity usage : %d Units.",unit);
	printf("\nYour Electricity bill : Rs. %d.",bill);
	printf("\n***PAY YOUR BILL WITHIN 10 DAYS OF BILL ISSUE.***");
	return 0;
}
