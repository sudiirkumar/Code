#include<stdio.h>
#include<string.h>
int main(){
    char name[30];
    printf("Enter your name: ");
    fflush(stdin);
    gets(name);
    printf("Name: %s",name);
    printf("\nLength of name: %d",strlen(name));
    printf("\nReverse of string: %s",strrev(name));
    printf("\nCharacter at index 1: %c",name[1]);
    char second_name[30];
    strcpy(second_name,name);
    printf("\nOriginal string: %s",name);
    strrev(second_name);
    printf("\nCopy string: %s",second_name);
    return 0;
}