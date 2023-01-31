#include<stdio.h>
int main()
{
	int term1=1,term2=1,term3=1,n;
	printf("Enter value of number of terms : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",term1);
		term3=term1+term2;
		term1=term2;
		term2=term3;
	}
	return 0;
}
