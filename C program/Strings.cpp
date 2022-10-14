#include<stdio.h>
#include<string.h>
int main(){
    char name[100];//String
    printf("Enter a name : ");
    gets(name);
    printf("Name is : %s",name);
    printf("\nLength of string : %d",strlen(name));
    return 0;
}