//x + x^2 + x^3 + x^4 + .......
#include<stdio.h>
int main(){
    int n;
    int x;
    printf("Enter number : ");
    scanf("%d",&n);
    printf("Enter value of x : ");
    scanf("%d",&x);
    int term = x;
    int sum = 0;
    int i=0;
    while(i<n){
        sum += term;
        term *= x;
        i++;
    }
    printf("Sum = %d",sum);
    return 0;
}