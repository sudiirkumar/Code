#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	printf("Enter a number to check its divisibility :  ");
	scanf("%d",a);
	if(a%2==0)
	{
		printf("The number is divisible by 2.");
	}
	else
	    if(a%4==0)
	    {
	    	printf("The number is divisible by 4 as well as by 2.");
		}
		else
		{
			printf("The number is neither divisible by 2 nor 4.");
		}
	return 0;
}
