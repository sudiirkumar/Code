#include <stdio.h>
int main(){
	//input cm and find value in meter and km
	int length_cm;
	printf("Enter value of length in cm: ");
	scanf("%d",&length_cm);
	float length_m;
	length_m = length_cm/100.0;
	float length_km = length_m/1000;
	printf("\nLength in Meters: %.2f m",length_m);
	printf("\nLength in Kilometers: %.2f km",length_km);
	return 0;
}