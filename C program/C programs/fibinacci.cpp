#include<stdio.h>
int main()
{
	int t1=1,t2=0,t3,i,n;
	printf("Enter the number of terms : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		t3=t1+t2;
		t1=t2;
		t2=t3;
		printf("%d ",t1);
	}
	return 0;
}
