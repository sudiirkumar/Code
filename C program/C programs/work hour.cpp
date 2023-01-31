#include<stdio.h>
int main()
{
	int hour,salary;
	float payment;
	printf("Enter the number of hours of work :  ");
	scanf("%d",&hour);
	printf("Enter the salary paid per hour :  ");
	scanf("%d",&salary);
	if(hour<=40)
	payment=hour*salary;
	else
	payment=40*salary+1.5*salary*(hour-40);
	printf("The total salary is Rs. %.2f",payment);
	return 0;
}
