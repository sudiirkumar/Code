#include<stdio.h>
int main()
{
	int row=1,a,b,col,y;
	printf("Enter the number of table needed : ");
	scanf("%d",&a);
	printf("\nEnter number of multiples needed : ");
	scanf("%d",&b);
	printf("   MULTIPLICATION TABLE   \n");
	printf("___________________________\n");
	do
	{
		col=1;
		do
		{
			y=row*col;
			printf("%4d",y);
			col=col+1;
		}
		while(col<=a);
		printf("\n");
		row=row+1;
	}
	while(row<=b);
	printf("___________________________________\n");
	return 0;
}
