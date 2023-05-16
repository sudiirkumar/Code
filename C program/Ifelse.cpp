#include <stdio.h>
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int remainder = n%2;
	if(remainder==0){
		printf("%d is even",n);
	}
	return 0;
}