#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int n;
    printf("Enter bit position: ");
    scanf("%d",&n);
    num = num ^ (1<<n);
    printf("New Value: %d",num);
    return 0;
}