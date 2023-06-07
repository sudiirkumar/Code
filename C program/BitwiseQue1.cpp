#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num&1){
        printf("Yes");
    }
    else{
        printf("No");
    }
}