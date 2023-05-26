#include <stdio.h>
int main(){
	int amount;
	printf("Enter amount: ");
	scanf("%d",&amount);
	//Denominations: 2000, 500, 200, 100, 50, 20, 10, 5, 2, 1
	if(amount>=2000){
		printf("\nNumber of 2000 currency: %d ",amount/2000);
		amount = amount % 2000;
	}
	if(amount>=500){
		printf("\nNumber of 500 currency: %d ",amount/500);
		amount = amount % 500;
	}
	if(amount>=200){
		printf("\nNumber of 200 currency: %d ",amount/200);
		amount = amount % 200;
	}
	if(amount>=100){
		printf("\nNumber of 100 currency: %d ",amount/100);
		amount = amount % 100;
	}
	if(amount>=50){
		printf("\nNumber of 50 currency: %d ",amount/50);
		amount = amount % 50;
	}
	if(amount>=20){
		printf("\nNumber of 20 currency: %d ",amount/20);
		amount = amount % 20;
	}
	if(amount>=10){
		printf("\nNumber of 10 currency: %d ",amount/10);
		amount = amount % 10;
	}
	if(amount>=5){
		printf("\nNumber of 5 currency: %d ",amount/5);
		amount = amount % 5;
	}
	if(amount>=2){
		printf("\nNumber of 2 currency: %d ",amount/2);
		amount = amount % 2;
	}
	if(amount>=1){
		printf("\nNumber of 1 currency: %d ",amount/1);
		amount = amount % 1;
	}
	return 0;
}