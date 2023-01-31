#include<stdio.h>
#include<math.h>
#define lambda 0.001
int main()
{
	float r;
	double t;
	int i,R;
	for(i=1;i<=40;i++)
	{
		printf("--");
	}
	printf("\n");
	for(t=0;t<=3000;t+=150)
	{
		r=exp(-lambda*t);
		R=(60*r);
		printf(" |");
		for(i=1;i<=R;++i)
		{
			printf(" ");
		}
		printf("*\n");
	}
	for(i=1;i<3;++i)
	{
		printf(" |\n");
	}
	return 0;
}
