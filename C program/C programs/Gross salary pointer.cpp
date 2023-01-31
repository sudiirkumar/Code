#include<stdio.h>
int main()
{
	int BS,*bs;
	float TA,*ta,DA,*da,HRA,*hra,total,*Total;
	printf("Enter the basic salary : ");
	scanf("%d",&BS);
	bs=&BS;
	TA=*bs*10/100;
	ta=&TA;
	DA=*bs*15/100;
	da=&DA;
	HRA=*bs*30/100;
	hra=&HRA;
	total=*bs+*ta+*da+*hra;
	Total=&total;
	printf("The TA is %f.\n",*ta);
	printf("The DA is %f\n",*da);
	printf("The HRA is %f\n",*hra);
	printf("The total salary including BA,DA,HRA and Basic salary is %f",*Total);
	return 0;
}
