#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	float b;
	printf("Enter a number to find it's squareroot :  ");
	scanf("%d",&a);
	b=sqrt(a);
	printf("%.2f is squareroot of %d",b,a);
	return 0;
}
