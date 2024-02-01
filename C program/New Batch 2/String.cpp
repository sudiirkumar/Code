#include<stdio.h>
#include<conio.h>
#include<string.h>
void print(char *s){
    printf("%s",s);
}
int main(){
    char name[30];
    printf("Enter a name: ");
    fflush(stdin);
    gets(name);
    print(name);
    printf("%d",strlen(name));
    char new_name[30];
    strcpy(new_name,name);
    printf("\n%s",new_name);
    return 0;
}