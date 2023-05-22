#include <stdio.h>
#include<stdlib.h>
int main(){
	//check which number is greater between 2 given numbers

	// int a,b;
	// printf("Enter 2 numbers: ");
	// scanf("%d%d",&a,&b);
	// if(a>b){
	// 	printf("%d is greater than %d",a,b);
	// }
	// else{
	// 	printf("%d is greater than %d",b,a);
	// }

	//check if a number is even or odd

	// int num;
	// printf("Enter a number: ");
	// scanf("%d",&num);
	// if(num%2==0)
	// 	printf("%d is an Even number",num);
	// else
	// 	printf("%d is an Odd number",num);

	// (num%2==0)?printf("%d is an Even number",num):printf("%d is an Odd number",num);

	// int a,b;
	// printf("Enter 2 numbers : ");
	// scanf("%d%d",&a,&b);
	// // int diff = (a>b)?a-b:b-a;
	// int diff = abs(a-b);
	// printf("Diff is %d",diff);	

	//Take input cp and sp of a product and find if is it profit or loss.

	// int cp,sp;
	// printf("Enter cost price and selling price of the product: ");
	// scanf("%d%d",&cp,&sp);
	// int diff = abs(cp-sp);
	// if(sp>cp){
	// 	// diff = sp-cp;
	// 	printf("Profit = %d",diff);
	// }
	// else{
	// 	// diff = cp-sp;
	// 	printf("Loss = %d",diff);
	// }

	//check if a character is 'a' or not

	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	if(ch=='a'){
		printf("Yes");
	}
	else{
		printf("No");
	}
	return 0;
}