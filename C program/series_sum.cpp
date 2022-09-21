//Find the sum of n terms of 1 + 11 + 111 + 1111 + .....
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of terms : ");
    scanf("%d",&n);
    int term = 1;
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum = sum + term;
        term = term*10 + 1;
    }
    printf("Sum = %d",sum);
    return 0;
}