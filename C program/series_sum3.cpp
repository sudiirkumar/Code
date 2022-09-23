//1 + 2 + 4 + 8 + ... -> 2^0 + 2^1 + 2^2 + 2^3 + ....
#include<stdio.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    int term = 1;
    int sum = 0;
    int i=0;
    while(i<n){
        sum += term;
        term *= 2;
        i++;
    }
    printf("Sum = %d",sum);
    return 0;
}