#include<stdio.h>
int main()
{
	int cp;
	float sp;
	printf("Enter the shopping value of Customer :  ");
	scanf("%d",&cp);
	if(cp<1000)
	{
		sp=cp-(cp*0.05);
		printf("The customer gets a discount of 5 percent and the amount to be paid is: %.2f",sp);
	}
	else
	    if(cp>=1000&&cp<3000)
	    {
	    	sp=cp-(cp*0.1);
	    	printf("The customer gets a discount of 10 percent and the amount to be paid is: %.2f",sp);
		}
	    else
	        if(cp>=3000&&cp<5000)
	        {
	        	sp=cp-(cp*0.12);
	        	printf("The customer gets a discount of 12 percent and the amount to be paid is: %.2f",sp);
			}
			else
			{
				sp=cp-(cp*0.15);
				printf("The customer gets a discount of 15 percent and the amount to be paid is: %.2f",sp);
			}
	return 0;		
}
