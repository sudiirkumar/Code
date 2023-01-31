#include<stdio.h>
int main()
{
	float cm,ft,in,m,km;
	printf("Enter the value in km to convert it into Inches, meter, feet and centimeter :  ");
	scanf("%f",&km);
	m=km*1000;
	cm=m*100;
	in=cm/2.5;
	ft=in/12;
	printf("The value in km entered by you is %.2f km.",km);
	printf("\nThe value in Meters is %.2f metre.",m);
	printf("\nThe value in Inches is %.2f inches.",in);
	printf("\nThe value in centimeters is %.2f cm.",cm);
	printf("\nThe value in Feet is %.2f ft.",ft);
	return 0;
}
