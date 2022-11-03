#include<stdio.h>
int main(){
    int ch;
    printf("Enter a number: ");
    scanf("%d",&ch);
    if(ch==1){
        printf("Monday");
    }
    else if(ch==2){
        printf("Tuesday");
    }
    else if(ch==3){
        printf("Wednesday");
    }
    else if(ch==4){
        printf("Thursday");
    }
    else if(ch==5){
        printf("Friday");
    }
    else if(ch==6){
        printf("Saturday");
    }
    else if(ch==7){
        printf("Sunday");
    }
    else{
        printf("Invalid Number");
    }
    return 0;
}