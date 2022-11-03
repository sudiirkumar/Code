#include<stdio.h>
#include<conio.h>
int main (){
    char ch;
    printf("Enter a character: ");
    ch = getche();
    printf("\n");
    if(ch>='0'&&ch<='9'){
        printf("Digit");
    }
    else if((ch>='A'&&ch<='Z') || (ch>='a'&&ch<='z')){
        printf("Alphabet");
    }
    else{
        printf("Special character");
    }
    return 0;
}