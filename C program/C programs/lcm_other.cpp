#include<stdio.h>
int main()
{
	int n1,n2,max,min;
	printf("Enter two positive integer : ");
	scanf("%d%d",&n1,&n2);
	//maxm. no. b/w n1 and n2 is stored in min
	max=(n1>n2)?n1:n2;
	min=(n1<n2)?n1:n2;
	while(1)
	{
		if(max%n1==0&&max%n2==0)
		{
			printf("The LCM of %d and %d is %d.",n1,n2,max);
			break;
		}
		max++;
	}
	return 0;
}
