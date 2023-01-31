#include<stdio.h>
int main()
{
	int temp[10];
	for(int i=0;i<10;i++)
	{
		printf("Enter Temperature for State %d : ",i+1);
		scanf("%d",&temp[i]);
	}
	printf("\n\nThe Temperatures are : \n");
	for(int i=0;i<10;i++)
	{
		printf("State %d : %d\n",i+1,temp[i]);
	}
	return 0;
}
