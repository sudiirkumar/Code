#include<stdio.h>
int main()
{
	int a,b,v;
	printf("Enter the values to interchange them");
	scanf("%d %d",&a,&b);
	printf("The value of 'a' given by you is %d\n",a);
	printf("The value of 'b' given by you is %d\n\n",b);
	v=a;
	a=b;
	b=v;
	printf("The value of 'a' NOW is %d\n",a);
	printf("The value of 'b' NOW is %d\n\n",b);
	return 0;
}
