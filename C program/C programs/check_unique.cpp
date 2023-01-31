#include<stdio.h>
int main()
{
	int a[19];
	for(int i=0;i<20;i++)
	{
		printf("Enter number %d : ",i+1);
		scanf("%d",&a[i]);
	}
	printf("The unique numbers are : ");
	for(int i=0;i<20;i++)
	{
		int count=0;
		for(int j=0;j<=i;j++)
		{
			if(a[j]==a[i])
			count+=1;
		}
		if(count==1)
		printf("%d ",a[i]);
	}
	return 0;
}
