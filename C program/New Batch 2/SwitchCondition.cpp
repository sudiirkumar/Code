#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    switch(n>0){
        case 1: printf("Positive");
                break;
        case 0: switch(n<0){
                    case 1: printf("Negative");
                            break;
                    case 0: printf("Zero");
                            break;
                }
                break;
    }

    // char ch;
    // printf("Enter a character: ");
    // scanf("%c",&ch);
    // switch(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
    //     case 1: printf("Vowel");
    //             break;
    //     case 0: printf("Consonant");
    //             break;
    // }
    return 0;
}