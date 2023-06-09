#include<stdio.h>
int main(){
    //for loop
    // int i;
    // for(i=0;i<=10;i++){
    //     printf("\nHello");
    // }

    //while loop
    // int i;
    // i = 20;
    // while(i<=10){
    //     printf("\nHello");
    //     i++;
    // }

    //do while loop
    int i = 1;
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    do{
        printf("\n%d",i);
        i++;
    }
    while(i<=n);
    return 0;
}