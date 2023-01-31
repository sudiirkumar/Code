#include<stdio.h>
int main()
{
	int BS;
	float TA,DA,HRA,total;
	printf("Enter the basic salary : ");
	scanf("%d",&BS);
	TA=BS*10/100;
	DA=BS*15/100;
	HRA=BS*30/100;
	total=BS+TA+DA+HRA;
	printf("The TA is %f.\n",TA);
	printf("The DA is %f\n",DA);
	printf("The HRA is %f\n",HRA);
	printf("The total salary including BA,DA,HRA and Basic salary is %f",total);
	return 0;
	
}
