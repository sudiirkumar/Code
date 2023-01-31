#include<stdio.h>
int square();
int main()
{
	printf("Going to calculate area of an square.");
	float area = square();
	printf("Area : %d",area);
}
int sqaure()
{
	float side;
	printf("Enter value of side of the square : ");
	scanf("%f",&side);
	return side*side;
}

