#include<stdio.h>
#include<math.h>
int main()
{
	int n,term[n];
	float mean=0,var=0,dev;
	printf("Enter number of terms : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("\nEnter term %d : ",i+1);
		scanf("%d",&term[i]);
	}
	for(int i=0;i<n;i++)
	{
		mean+=term[i];
	}
	mean/=n;
	printf("Mean of Given data : %f",mean);
	for(int i=0;i<n;i++)
	{
		var=var+pow((term[i]-mean),2);
	}
	var/=n;
	printf("\nVariance of Given data : %f",var);
	dev=sqrt(var);
	printf("\nStandard deviation of the given data : %f",dev);
	return 0;
}
