#include<stdio.h>
int main(){
    //-----ASCII value calculation----
    // char ch;
    // printf("Enter a character : ");
    // //scanf("%c",&ch);
    // ch = getche();//function which return a character value
    // printf("\nCharacter is %c",ch);
    // printf("ASCII value of %c is %u",ch,ch);

    int i=97;// small letters
    while(i<=122){
        printf("%c ",i);
        i++;
    }
    i=65;
    printf("\n");
    while(i<=90){//capital letters
        printf("%c ",i);
        i++;
    }
    return 0;
}