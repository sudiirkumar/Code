#include<stdio.h>
int main()
{
	int choice;
	printf("\n1.Course C");
	printf("\n2.Course C++");
	printf("\n3.Course Java");
	printf("\n4.Course Python");
	printf("\nEnter the course you want to know the syllabus");
	scanf("%d",&choice);
	switch (choice)
	{
	
	case 1: 
	printf(" the course is C");
	
	break;
	case 2: 
	printf("the course is c++");
	break;
	case 3:
		printf("the course is java");
		break;
		case 4:
			printf("the course is python");
			break;
			default :
			printf("hey Ullu u dont know the choices");
		}
}
