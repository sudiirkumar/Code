#include<stdio.h>
int main()
{
	int marks;
	float per;
	printf("Enter marks of an student to find its grade and percentage, if total marks is 500");
	scanf("%d",&marks);
	per=marks/5;
	if(per>60)
	printf("\nYour grade is 'A' with %.2f percentage",per);
else
	if(per>50)
	printf("\nYour grade is 'B' with %.2f percentage",per);
else
	if(per>40)
	printf("\nYour grade is 'C' with %.2f percentage",per);
else
	if(per>30)
	printf("\nYour grade is 'D' with %.2f percentage",per);
else
	if(per<30)
	printf("\nYour grade is 'E' with %.2f percentage",per);
	return 0;
}
