#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    switch(n%2==0){
        case 1: //True block    
            printf("Even number");
            break;
        case 0: //False block
            printf("Odd number");
            break;
    }
    return 0;
}