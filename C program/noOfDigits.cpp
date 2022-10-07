#include<stdio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int count=0;
    while(num!=0){
        printf("%d ",num%10);
        num = num/10;
        count++;
    }
    printf("\nNumber of digits : %d",count);
    return 0;
}