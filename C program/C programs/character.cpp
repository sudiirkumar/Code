#include<stdio.h>
int main()
{
	char ch;
	int lc,uc,sc,num,vow,con;
	printf("Enter a character :  ");
	scanf("%c",&ch);
	lc=(ch>='a'&&ch<='z');
	uc=(ch>='A'&&ch<='Z');
	sc=(ch<'65');
	num=(ch>='0'&&ch<='9');
	vow=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
	if(vow&&lc)
	printf("\n\n%c is a lowercase vowel.",ch);
	else
	if(vow&&uc)
	printf("\n\n%c is a uppercase vowel.",ch);
	else
	if(uc)
	printf("\n\n%c is a uppercase consonant.",ch);
	else
	if(lc)
	printf("\n\n%c is a lowercase consonant.",ch);
	else
	if(num)
	printf("\n\n%c is a digit.",ch);
	else
	if(sc)
	printf("\n\n%c is a special character.",ch);
	return 0;
}
