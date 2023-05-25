#include<stdio.h>
int main(){
	// int a,b,c;
	// printf("Enter 3 numbers: ");
	// scanf("%d%d%d",&a,&b,&c);
	// if(a>b && a>c){
	// 	printf("%d is greatest",a);
	// }
	// else if(b>c){
	// 	printf("%d is greatest",b);
	// }
	// else{
	// 	printf("%d is greatest",c);
	// }

	int a,b,c;
	printf("Enter 3 numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	if((a<b and b<c) or (c<b and b<a)){
		printf("%d is middle most",b);
	}
	else if((a<c and c<b) or (b<c and c<a)){
		printf("%d is middle most",c);
	}
	else{
		printf("%d is middle most",a);
	}
	return 0;
}