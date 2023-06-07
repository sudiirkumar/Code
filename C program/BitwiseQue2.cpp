#include<stdio.h>
int main(){
    int num;
    int n = sizeof(num)*8;
    printf("Enter a number: ");
    scanf("%u",&num);
    if((num&(1<<(n-1)))==0){
        printf("No");
    }
    else{
        printf("Yes");
    }
    // printf("\n%u",num);
    return 0;
}