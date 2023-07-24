#include<stdio.h>
#include<ctype.h>
#include<conio.h>
int main(){
    char c;
    printf("Enter a character: ");
    // scanf("%c",&c);
    c = getche();
    if(c>='A' && c<='Z'){
        printf("\nCapital letter");
    }
    else if(c>='a' && c<='z'){
        printf("\nSmaller letter");
    }
    else if(c>='0' && c<='9'){
        printf("\nDigit");
    }
    else{
        printf("\nSpecial character");
    }
    // if(isalnum(c)){
    //     if(isalpha(c)){
    //         if(isupper(c)){
    //             printf("\nCapital letter");
    //         }
    //         else{
    //             printf("\nLower letter");
    //         }
    //     }
    //     else{
    //         printf("\nDigit");
    //     }
    // }
    // else{
    //     printf("\nSpecial character");
    // }

    return 0;
}