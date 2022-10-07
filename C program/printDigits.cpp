#include<stdio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    while(num!=0){
        printf("%d ",num%10);
        num = num/10;
    }
    return 0;
}