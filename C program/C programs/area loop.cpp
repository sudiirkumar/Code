#include<stdio.h>
int main()
{
	int l,b,area,i;
	for(i=0;i<=3;i++)
	{
		printf("\n\nEnter value of l and b : ");
		scanf("%d%d",&l,&b);
		area=l*b;
		printf("\nThe area of the rectangle is %d.",area);
	}
	return 0;
}
