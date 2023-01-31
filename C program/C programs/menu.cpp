#include<stdio.h>
#include<math.h>
int main()
{
	int p,t,ch;
	float r,res;
	printf("Menu\n==========================================\nInterest calulator\n");
	printf("1.Simple Interest\n2.Compound interest(Yearly)\n3.Compound Interest(Half Yearly)\n4.Compound Interest(Quarterly)\n5.Exit");
	printf("\nEnter youtr choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter Principle : ");
			scanf("%d",&p);
			printf("Enter Rate of Interest : ");
			scanf("%f",&r);
			printf("Enter time period(In years) : ");
			scanf("%d",&t);
			res=p*r*t/100;
			printf("Simple Interest : %f",res);
			break;
		case 2:
			printf("Enter Principle : ");
			scanf("%d",&p);
			printf("Enter Rate of Interest : ");
			scanf("%f",&r);
			printf("Enter time period(In years) : ");
			scanf("%d",&t);
			res=(p*(pow((100+r)/100),t))-p;
			printf("Simple Interest : %f",res);
			break;
		case 3:
			printf("Enter Principle : ");
			scanf("%d",&p);
			printf("Enter Rate of Interest : ");
			scanf("%f",&r);
			printf("Enter time period(In years) : ");
			scanf("%d",&t);
			res=(p*(pow((200+r)/200),2*t))-p;
			printf("Simple Interest : %f",res);
			break;
	}
}
