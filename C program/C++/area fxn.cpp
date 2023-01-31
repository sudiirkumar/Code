#include<stdio.h>
int square();
int main()
{
	printf("Going to calculate area of an square.\n");
	float area = square();
	printf("Area : %f",area);
}
int square()
{
	float side;
	printf("Enter value of side of the square : ");
	scanf("%f",&side);
	return side*side;
}

