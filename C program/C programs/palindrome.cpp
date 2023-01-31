#include<stdio.h>
int main()
{
	int n,rem,orgN,revN=0;
	printf("Enter an integer : ");
	scanf("%d",&n);
	orgN=n;
	while(n!=0)
	{
		rem=n%10;
		revN=revN*10+rem;
		n/=10;
	}
	if(orgN==revN)
	{
		printf("%d is a palindrome number.",orgN);
	}
	else
	{
	printf("%d is not a palindrome number.",orgN);
    }
	return 0;
}
