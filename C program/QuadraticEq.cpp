#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("Enter the values of a, b and c: ");
	scanf("%d%d%d",&a,&b,&c);
	float x;
	int D = (b*b) - (4*a*c);
	if(D<0){
		printf("Imagenary roots");
	}
	else if(D==0){
		x = -b/(2*a);
		printf("Equal roots : %.2f %.2f",x,x);
	}
	else{
		x = (-b + sqrt(D))/(2*a);
		printf("Distinct roots: %.2f ",x);
		x = (-b - sqrt(D))/(2*a);
		printf("%.2f",x);
	}
	return 0;
}