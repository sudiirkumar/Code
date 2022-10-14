#include<stdio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    // if(num==1){
    //     printf("one");
    // }
    // else if(num==2){
    //     printf("two");
    // }
    // else if(num==3){
    //     printf("three");
    // }
    switch(num){
        case 1: printf("One");
                break;
        case 2: printf("Two");
                break;
        case 3: printf("Three");
                break;
        default:printf("Invalid choice");
    }
    return 0;
}