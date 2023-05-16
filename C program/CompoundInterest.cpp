#include<stdio.h>
#include<math.h>
int main(){
	//variable declaration
	int principle;
	float rate;
	int time;
	//input
	printf("Enter values of principal, rate and time: ");
	scanf("%d%f%d",&principle,&rate,&time);
	//calculation
	float amount = principle * pow((100+rate)/100,time);
	float compound_int = amount - principle;
	//output
	printf("Amount is %.2f",amount);
	printf("\nCompound interest is %.2f",compound_int);
	return 0;
}