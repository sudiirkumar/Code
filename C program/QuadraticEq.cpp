#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("Enter the values of a, b and c: ");
	scanf("%d%d%d",&a,&b,&c);
	float x;
	int D = (b*b) - (4*a*c);
	float x2;
	switch(D==0){
		case 0:	// d is non-zero
				switch(D>0){
					case 0:	//d is negative
							printf("Imagenary roots: ");
							x = -b/(2.0*a);//real part
							D = -D;//making D positive
							x2 = sqrt(D)/(2*a);
							printf("%.2f + %.2fi and %.2f - %.2fi",x,x2,x,x2);
							break;
					case 1:	//d is positive
							x = (-b + sqrt(D))/(2*a);
							printf("Unequal roots: %.2f ",x);
							x = (-b - sqrt(D))/(2*a);
							printf("%.2f",x);
				}
				break;
		case 1:	//d is zero
				x = -b/(2*a);
				printf("Equal roots: %.2f %.2f",x,x);
	}
	// if(D<0){
	// 	printf("Imagenary roots");
	// }
	// else if(D==0){
	// 	x = -b/(2*a);
	// 	printf("Equal roots : %.2f %.2f",x,x);
	// }
	// else{
	// 	x = (-b + sqrt(D))/(2*a);
	// 	printf("Distinct roots: %.2f ",x);
	// 	x = (-b - sqrt(D))/(2*a);
	// 	printf("%.2f",x);
	// }
	return 0;
}