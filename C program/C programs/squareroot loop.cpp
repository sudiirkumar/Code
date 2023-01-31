#include<stdio.h>
#include<math.h>
int main()
{
	int num,i=1;
	float res;
	while(i<=100)
	{
		printf("Enter a number to find its squareroot : ");
	    scanf("%d",&num);
	    if(num==9999)
	    break;
	    if(num<0)
	    {
	    	printf("Number is negative");
	    	continue;
		}
		res=sqrt(num);
		printf("Result : %.3f",res);
	}
	return 0;
}
