#include<stdio.h>
#include<math.h>
int main()
{
	float x=5,sum;
	while(x<=15)
	{
		if(x>4.3&&x<9.1)
		{
			printf("\nFor 4.3<x<9.1\nx=%.2f\n",x);
			sum=(3*x)+(5*pow(x,3));
			printf("f(x) = %.4f\n",sum);
		}
		else if(x>9.1&&x<15.5)
		{
			printf("\nFor 9.1<x<15.5\nx=%.2f\n",x);
			sum=(6*x)+(8*pow(x,3));
			printf("f(x) = %.4f\n",sum);
		}
		x+=0.5;
	}
	return 0;
}
