#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 3 sides of a triangle : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&b==c&&c==a)
	printf("The triangle is Equilateral triangle.");
	else {
	if(a==b||b==c||c==a)
	printf("The triangle is Isosceles triangle.");
}
	if(a!=b&&b!=c&&c!=a)
	printf("The triangle is Scalene triangle.");
	return 0;
}
