#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year to find out if it's a leap year or not :  ");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("The given year is a leap year.");
	}
	else
	{
		printf("The given year is not a leap year.");
	}
	return 0;
}
