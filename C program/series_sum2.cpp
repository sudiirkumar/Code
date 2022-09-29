
//x + x^2 + x^3 + ... n terms
#include<stdio.h>
int main(){
    int n;
    int x;
    printf("Enter number of terms : ");
    scanf("%d",&n);//n=3
    printf("Enter value of x : ");
    scanf("%d",&x);//x=2
    int sum=0,i=0;
    int term=x;
    while (i<n)
    {
        sum=sum+term;
        term=term*x;
        i++;
    }
    printf("Sum = %d",sum);
    return 0;
}