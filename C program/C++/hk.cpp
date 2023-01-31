#include<stdio.h>
int main()
{
	int age;
	char name,gen;
	printf("Enter Name, age and gender of the applicant");
	scanf("%s %d %s",&name,&age,&gen);
	if(age>30)
	printf("%s will be insured",name);
	else
	if(age>25)
	printf("%s will be insured",name);
	else
	printf("%s cannot be insured",name);
	return 0;
}
