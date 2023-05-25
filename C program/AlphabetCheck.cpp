#include<stdio.h>
#include<conio.h>
int main(){
	char ch;
	printf("Enter any character: ");
	ch = getche();
	if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z')){
		printf("\nAlphabet");
	}
	else{
		printf("\nNot an Alphabet");
	}
	// printf("\nASCII = %d",ch);
	return 0;
}