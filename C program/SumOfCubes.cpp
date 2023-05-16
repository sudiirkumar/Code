#include<stdio.h>
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int sum = n*n*(n+1)*(n+1)/4;
	printf("Sum is %d",sum);
	return 0;
}