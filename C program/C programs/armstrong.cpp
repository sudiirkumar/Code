#include<stdio.h>
int main()
{
	int num,rem,orgnum,result=0;
	printf("Enter a number to check if it is an armstrong number : ");
	scanf("%d",&orgnum);
	num=orgnum;
	while(num!=0)
	{
		rem=num%10;
		result=result+rem*rem*rem;
		num=num/10;
	}
	if(result==num)
	printf("%d is an armstrong number.",orgnum);
	else
	printf("%d is not an armstrong number.",orgnum);
	return 0;
}
