#include<stdio.h>
int main()
{
	int a,b,c,d;
	float ratio;
	printf("Enter 4 numbers : ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(c==d)
	{
	printf("The ratio is not possible as %d - %d =0.",c,d);
    }
	else
	{
	ratio=(a+b)/(c-d);
	printf("The value of the ratio is %.4f",ratio);\
	}
	return 0;
}
