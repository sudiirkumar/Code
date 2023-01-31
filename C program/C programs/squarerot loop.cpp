#include<stdio.h>
#include<math.h>
int main()
{
	int num,i=1;
	float res;
	while(i<=100)
	{
		printf("\n\nEnter a number to find its squareroot : ");
	    scanf("%d",&num);
	    if(num==9999)
	    break;
	    if(num<0)
	    {
	    	printf("\nNumber is negative");
	    	continue;
		}
		res=sqrt(num);
		printf("\nResult : %.3f",res);
	}
	return 0;
}
