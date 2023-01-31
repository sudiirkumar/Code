#include<stdio.h>
#include<math.h>
int main()
{
	int i=1;
	float x=0.2,e,cube,sine,sum;
	for(i=1;i<=10;i++)
	{
		e=exp(x);
		cube=pow(x,3);
		sine=sin(x);
		sum=e+cube+sine;
		printf("Term %d = %f\n",i,sum);
		x+=0.2;
	}
}
