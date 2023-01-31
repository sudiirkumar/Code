#include<stdio.h>
int main()
{
	int i=1,a,sum=0,count=0;
	while(i<=10)
	{
		printf("\nEnter number %d : ",i);
		scanf("%d",&a);
		i=i+1;
		if(a<0)
		break;
		sum=sum+a;
		count=count+1;
	}
	printf("\nThe sum of %d numbers given by you is %d.",count,sum);
	return 0;
}
