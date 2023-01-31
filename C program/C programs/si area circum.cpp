#include<stdio.h>
int main()
{
	int p,t,r,R;
	float area,cir,si;
	printf("Enter the values of principle, time, rate of interest and Radius of circle : ");
	scanf("%d%d%d%d",&p,&t,&r,&R);
	cir=3.14*2*R;
	area=3.14*R*R;
	si=p*r*t/100;
	printf("Circumference of circle is %f\n",cir);
	printf("Area of circle is %f\n",area);
	printf("Simple Interest : %f",si);
	return 0;
}
