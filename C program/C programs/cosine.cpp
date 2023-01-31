#include<stdio.h>
#include<math.h>
int main()
{
	int i=0;
	float x,result;
	while(i<=180)
	{
		x=(3.1416/180)*i;
		result=cos(x);
		printf("\ncos(%d) = %f",i,result);
		i=i+1;
	}
	return 0;
}
