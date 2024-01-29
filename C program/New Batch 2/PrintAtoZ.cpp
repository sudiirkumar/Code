#include<stdio.h>
int main(){
    // for(char c = 'A';c<='Z';c++){
    //     printf("%c ",c);
    // }
    char c = 'A';
    while(c<='Z'){
        printf("%c ",c);
        c++;
    }
    printf("\n");
    c = 'a';
    while(c<='z'){
        printf("%c ",c);
        c++;
    }
    return 0;
}