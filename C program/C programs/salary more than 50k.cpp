#include<stdio.h>
int main()
{
	int salary,count=0,i=1;
	for(i=1;i<=10;i++)
	{
		printf("Enter salary of Employee %d : ",i);
		scanf("%d",&salary);
		if(salary>50000)
		{
			count=count+1;
		}
	}
	printf("Number of Employees with salary >50k : %d",count);
	return 0;
}
