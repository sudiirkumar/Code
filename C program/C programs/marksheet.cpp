#include<stdio.h>
int main()
{
	int marks;
	float per;
	printf("Enter the marks of the student is total marks is 500 :  ");
	scanf("%d",&marks);
	per=marks/5;
	if(per>=60)
		printf("First Division");
	else if(per>=45)
		printf("Second Division");
	else if(per>=30)
		printf("Third Division");
	else
		printf("Failed");
	return 0;		
}
