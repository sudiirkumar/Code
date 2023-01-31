#include<stdio.h>
struct book
{
	char name[50],auth_name[20];
	int page,edi,YOP,price;
};
int main()
{
	int i,n;
	printf("Enter Number of books to add : ");
	scanf("%d",&n);
	struct book b[n];
	for(i=0;i<n;i++)
	{
		printf("Enter Name for book %d : ",i+1);
		scanf("%s",&b[i].name);
		printf("Enter author name : ");
		scanf("%s",&b[i].auth_name);
		printf("Enter edition : ");
		scanf("%d",&b[i].edi);
		printf("Enter Year of Publication : ");
		scanf("%d",&b[i].YOP);
		printf("Enter number of pages : ");
		scanf("%d",&b[i].page);
		printf("Enter Price : ");
		scanf("%d",&b[i].price);
	}
	printf("\nPrinting Details................\n\n");
	for(i=0;i<n;i++)
	{
		printf("\n%d. Name : %s\n   Author : %s\n   Edition : %d\n   Year : %d\n   Pages : %d\n   Price : %d\n\n",i+1,b[i].name,b[i].auth_name,b[i].edi,b[i].YOP,b[i].page,b[i].price);
	}
	return 0;
}
