#include<stdio.h>
#include<math.h>
int main()
{
	float x,y;
	read:
		scanf("%f",&x);
		if(x<0) goto read;
		y=sqrt(x);
		printf("The Squareroot of %f is %f.\n",x,y);
		goto read;
	return 0;	
}
