#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float x1,x2,d;
	printf("Enter the value of a,b,c :  ");
	scanf("%d%d%d",&a,&b,&c);
	d=pow(b,2)-4*a*c;
	if(d>0)
{
	x1=(-b+sqrt(d))/(2*a);
	x2=(-b-sqrt(d))/(2*a);
	printf("The roots for the equation having variable's coefficient as %d, %d and %d are %.2f and %.2f",a,b,c,x1,x2);
}
	else
	    if(d==0)
	{
		x1=-b/(2*a);
	    printf("The given equation has equal roots as %.2f",x1);
    }
	    else
	    printf("The given equation has imagenary roots(NO real roots)");
	return 0;    
}
