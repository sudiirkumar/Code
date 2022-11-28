#include<stdio.h>
#include<string.h>
int main(){
    char fname[20];//  = "Dennis Ritchie";
    //input
    printf("Enter first name: ");
    // scanf("%s",&name);
    gets(fname);//input
    printf("First Name: ");
    puts(fname);//output
    // printf("\nLength of string: %d",strlen(name));
    char lname[20];
    printf("Enter last name: ");
    gets(lname);//input
    printf("Last Name: ");
    puts(lname);//output
    strcat(fname," ");
    strcat(fname,lname);
    printf("Name: %s",fname);
    return 0;
}