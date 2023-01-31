#include<math.h>
#include<stdio.h>
int main()
{
	int a,b,Result;
	printf("Enter the base and power respectively");
	scanf("%d %d",&a,&b);
	Result=pow(a,b);
	printf("The result is %d",Result);
	return 0;
}
