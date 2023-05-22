#include <stdio.h>
int main(){
	//Check if a character is vowel or not

	// char ch;
	// printf("Enter a character: ");
	// scanf("%c",&ch);
	// if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
	// 	printf("Vowel");
	// }
	// else{
	// 	printf("Consonant");
	// }
	
	//Check if a number is even natural number

	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num%2==0 && num>0){
		printf("Yes");
	}
	else{
		printf("No");
	}
	return 0;
}