#include<stdio.h>
int main()
{
	int ts,rh,cc,a,b,c;
	printf("Enter Tensile for the steel in kgf/sq.cm :  ");
	scanf("%d",&ts);
	printf("Enter Rockwell Hardness for the steel :  ");
	scanf("%d",&rh);
	printf("Enter Carbon content in percent :  ");
	scanf("%d",&cc);
	a=ts>=700;
	b=rh>=200;
	c=cc<=6;
	if(a&&b&&c)
	{
		printf("The grade of steel is 'A'.");
	}
	else
	    if(a&&b)
	    {
	    	printf("The grade of steel is 'B'.");
		}
		else
		    if(a&&c)
		    {
		    	printf("The grade of steel is 'C'.");
			}
			else
			    if(b&&c)
			    {
			    	printf("The grade of steel is 'D'.");
				}
				else
				    if(a||b||c)
				    {
				    	printf("The grade of steel is 'E'.");
					}
					else
					printf("The grade of steel is 'F'.");
	return 0;				
}
