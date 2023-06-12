// 1 + 2 + 3 + 4 + ... + n = n*(n+1)/2
// n*(2*n+1)*(n+1)/6
// n*n*(n+1)*(n+1)/4
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum = n*(n+1)/2;
    printf("Sum = %d",sum);
    return 0;
}
