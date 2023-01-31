//count the number of students whose height is more than 170 cm and weight is more than 50 kg among 10 students
#include<stdio.h>
int main()
{
	int count=0,input_h,input_w;
	for(int i=0;i<10;i++)
	{
		printf("Enter height and weight of student %d : ",i+1);
		scanf("%d%d",&input_h,&input_w);
		if(input_h>=170&&input_w>=50)
		count++;
	}
	printf("The number of Students : %d",count);
	return 0;
}
