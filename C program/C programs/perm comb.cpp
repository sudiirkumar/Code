#include<stdio.h>
int fact(int);
int main()
{
	int ch,r,n,res;
	printf("Choose what you need to calculate : \n1.Number of Permutations \n2.Number of combinations \nChoice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("You have Chose : Permutation....\n");
			printf("Enter total number of objects/persons : ");
			scanf("%d",&n);
			printf("Enter number of objects/persons taken at a time : ");
			scanf("%d",&r);
			res=fact(n)/fact(n-r);
			printf("\nNumber of permutations : %d",res);
			break;
		case 2:
			printf("\nYou have Chose : Combinations....");
			printf("\nEnter total number of objects/persons : ");
			scanf("%d",&n);
			printf("\nEnter number of objects/persons taken at a time : ");
			scanf("%d",&r);
			res=fact(n)/(fact(n-r)*fact(r));
			printf("\nNumber of combinations : %d",res);
			break;
		default:
			printf("\nError");
	}
	return 0;
}
int fact(int a)
{
	int fact=1;
	for(int i=1;i<=a;i++)
	{
		fact=i*fact;
	}
	return fact;
}

