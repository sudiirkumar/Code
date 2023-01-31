#include<stdio.h>
void factorial(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	    {
	   		fact=fact*i;
        }
    printf("The factorial of %d is %d\n",n,fact);
}
int main()
{
	int a=4,b=5,c=7;
	factorial(a);
	factorial(b);
	factorial(c);
	return 0;
}
