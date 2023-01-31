#include<stdio.h>
int main()
{
	int a[4],count[4],i;
	count[0]=count[1]=count[2]=count[3]=count[4]=0;
	for(i=0;i<5;i++)
	{
		printf("Enter number %d : ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(int j=i;j<5;j++)
		{
			if(a[j]==a[i])
			{
				count[j]+=1;
				break;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("Count of %d : %d\n",a[i],count[i]);
	}
	return 0;
}
