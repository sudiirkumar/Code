
//x + x^2 + x^3 + ... n terms
#include<stdio.h>
int main(){
    int n;
    int x;
    printf("Enter number of terms : ");
    scanf("%d",&n);//n=3
    printf("Enter value of x : ");
    scanf("%d",&x);//x=2
    int sum=0;
    int term=x;//2 2^2 2^3 -> 2 4 8
    for(int i=0;i<n;i++){//0 1 2
        sum = sum + term;
        term = term*x;
    }
    printf("Sum = %d",sum);
    return 0;
}