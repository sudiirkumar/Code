#include<stdio.h>
int main()
{
	int salary,bonus,gs;
	printf("Enter salary");
	scanf("%d",&salary);
	bonus=3000;
	gs=bonus+salary;
	if(salary>1500)
	printf("Your salary including bonus is of %d, and is credited",gs);
	else
	printf("Your salary %d ");
	return 0;
}
