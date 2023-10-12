#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main(){
    char ch;
    printf("Enter a character: ");
    // scanf("%c",&ch);
    ch = getche();
    if(isalnum(ch)){
        if(isalpha(ch)){
            printf("\nAlphabet");
        }
        else{
            printf("\nDigit");
        }
    }
    else{
        printf("\nSpecial character");
    }






    // if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
    //     printf("\nAlphabet");
    // }
    // else if(ch>='0' && ch<='9'){
    //     printf("\nDigit");
    // }
    // else{
    //     printf("\nSpecial character");
    // }
    
    return 0;
}