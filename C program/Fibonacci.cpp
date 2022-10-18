#include<stdio.h>
int main(){
    int n;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    int a=0;
    int b=1;
    int c;
    printf("Fibonacci series upto %d terms: \n",n);
    for(int i=0;i<n;i++){
        printf("%d ",a);
        c = a+b;
        a = b;
        b = c;
    }
    return 0;
}