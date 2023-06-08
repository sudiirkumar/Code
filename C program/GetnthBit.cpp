#include<stdio.h>
int main(){
    int num,n;
    printf("Enter number and bit position: ");
    scanf("%d%d",&num,&n);
    int bit = (1<<n);
    if((num&bit)==0){
        printf("Clear bit");
    }   
    else{
        printf("Set bit");
    }
    return 0;
}