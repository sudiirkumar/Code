#include<stdio.h>
#include<ctype.h>
int main(){
    char x;
    printf("Enter a character : ");
    scanf("%c",&x);//A
    if(isalnum(x)){
        if(isalpha(x)){
            if(isupper(x)){
                if(x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){
                    printf("Capital vowel");
                }
                else{
                    printf("Capital consonant");
                }
            }
            else{
                if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
                    printf("Small vowel");
                }
                else{
                    printf("Small consonant");
                }
            }
        }
        else{
            printf("Digit");
        }
    }
    else{
        if(isspace(x)){
            printf("Space");
        }
        else{
            if(ispunct(x)){
                printf("Punctuation");
            }
            else{
                printf("Other character");
            }
        }
    }
    printf("\n");
    return 0; 
}