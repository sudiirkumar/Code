#include<stdio.h>
int main()
{
	int a,table;
	printf("Enter a number to find its multiplication table : ");
	scanf("%d",&a);
	printf("\nThe table of %d is as follows :\n",a);
	for(int i=1;i<=10;i++)
	{
		table=a*i;
		printf("\n%d",table);
	}
	return 0;
}
