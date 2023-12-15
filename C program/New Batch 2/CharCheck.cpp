// alphabet -> capital vowel, small vowel, capital consonant, small consonant
// digit
// Special character
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main(){
    char input;
    printf("Enter a character: ");
    input = getche();
    if(input>='A' && input<='Z'){//Capital letter
        if(input=='A'||input=='E'||input=='I'||input=='O'||input=='U'){
            printf("\nUppercase vowel");
        }
        else{
            printf("\nUppercase consonant");
        }
    }
    else if(input>='a' && input<='z'){//Lowercase
        if(input=='a'||input=='e'||input=='i'||input=='o'||input=='u'){
            printf("\nLowercase vowel");
        }
        else{
            printf("\nLowercase consonant");
        }
    }
    else if(input>='0' && input<='9'){
        printf("\nDigit");
    }
    else{
        printf("\nSpecial character");
    }
    // if(isalnum(input)){
    //     if(isalpha(input)){
    //         if(islower(input)){
    //             if(input=='a'||input=='e'||input=='i'||input=='o'||input=='u'){
    //                 printf("\nLowercase vowel");
    //             }
    //             else{
    //                 printf("\nLowercase consonant");
    //             }
    //         }
    //         else{
    //             if(input=='A'||input=='E'||input=='I'||input=='O'||input=='U'){
    //                 printf("\nUppercase vowel");
    //             }
    //             else{
    //                 printf("\nUppercase consonant");
    //             }
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