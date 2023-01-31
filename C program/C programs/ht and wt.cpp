#include<stdio.h>
int main()
{
	int ht,wt,count,i;
	count=0;
	printf("Enter height(in cm) and weight(in kg) of student : ");
	for(i=1;i<=10;i++)
	{
		scanf("%d%d",&ht,&wt);
		if(wt<75&&ht>150)
		count=count+1;
	}
	printf("Number of boys with weight < 75 kg\n");
	printf("and height > 170 cm = %d\n",count);
	return 0;
}
