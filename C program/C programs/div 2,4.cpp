#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("Enter a number to check its divisibility :  ");
	scanf("%d",a);
	b=a%2==0;
	c=a%4==0;
	if(b)
	{
		printf("The number is divisible by 2.");
	}
	else
	    if(c)
	    {
	    	printf("The number is divisible by 4 as well as by 2.");
		}
		else
		{
			printf("The number is neither divisible by 2 nor 4.");
		}
	return 0;
}
