#include<stdio.h>
int main()
{
	int i=1,r,n;
	printf("Enter number of terms : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		r=i%7;
		if(r!=0)
		printf("%d\t",i);
	}
	return 0;
}
