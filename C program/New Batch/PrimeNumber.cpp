#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num==1){
        printf("Non prime");
        return 0;
    }
    int i;
    for(i=2;i<num;i++){
        if(num%i==0){
            printf("Non prime");
            break;
        }
    }
    if(i==num){
        printf("Prime");
    }
    return 0;
}