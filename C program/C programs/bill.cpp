#include<stdio.h>
int main()
{
	char name[20];
	int id,unit,bill;
	printf("Enter name, Customer ID, energy unit in kWh respectively");
	scanf("%s %d %d",&name,&id,&unit);
	bill=unit*7;
	printf("The details of Customer is as follows ");
	printf("name %s\n",name);
	printf("Customer ID %d\n",id);
	printf("Bill is %d\n\n",bill);
	printf("**Thanks for using**");
	return 0;
}
