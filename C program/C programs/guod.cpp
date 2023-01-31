#include<stdio.h>
int main()
{
	long int  x=0,y=1,z;
	int i,n;

	printf("enter the number of terms");
	scanf("%ld",&n);

	for(i=1;i<n;i++)
	
	{
	
	z=x+y;
	printf("%ld\t",z);
	x=y;
	y=z;
}

return 0;
}
