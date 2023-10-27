#include<stdio.h>
int main(){
    char capital_letter = 'A';
    char small_letter = 'a';
    printf("Uppercase characters: \n");
    for(;capital_letter<='Z';capital_letter++){
        printf("%c ",capital_letter);
    }
    printf("\nLowercase characters: \n");
    for(;small_letter<='z';small_letter++){
        printf("%c ",small_letter);
    }
    return 0;
}