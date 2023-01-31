#include<stdio.h>
#include<math.h>
int main()
{
	float deg,x,term;
	printf("Enter value in degree : ");
	scanf("%f",&deg);
	x=3.14/180*deg;
	term=cos(x);
	printf("The value of cos(%.2f) is : %f",deg,term);
	return 0;
}
