#include<stdio.h>
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    int n;
    printf("Enter bit position(0-31): ");
    scanf("%d",&n);
    int bit = (1<<n);//01000
    bit = ~bit;//10111
    num = num & bit;
    printf("Result: %d",num);
    return 0;
}