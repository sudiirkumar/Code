#include<stdio.h>
int main()
{
	int a,b,i=1;
	float res;
	char opr;
	printf("CALCULATOR\n");
	for(i=1;i<=100;i++)
	{
	 printf("\n");
	 scanf("%d%c%d",&a,&opr,&b);
	 if(a=='done')
	 break;
	 else
	 if(opr=='+')
	{
		res=a+b;
		printf("\nThe sum of %d and %d is %.2f",a,b,res);
	}
	else
	    if(opr=='-')
	    {
	    	res=a-b;
	    	printf("The difference between %d and %d is %.0f",a,b,res);
		}
		else
		    if(opr=='*')
		    {
		    	res=a*b;
		    	printf("The product of %d and %d is %.2f",a,b,res);
			}
			else
			{
				res=a/b;
				printf("The quotient of %d by %d is %.2f",a,b,res);
			}
    }
	return 0;
}
