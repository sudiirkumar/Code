#include<stdio.h>
int main()
{
	int c,a[4];
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(a[i]<a[j])
			{
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
	}
	printf("Ascending order is ");
	for(int i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
