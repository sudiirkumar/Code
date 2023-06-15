#include<stdio.h>
int main(){
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    if(n<0){
        printf("Factorial of negative number is not defined");
        return 0;
    }
    int fact=1;
    int i;//1<=-6
    for(i=1;i<=n;i++){
        fact=fact*i;   
    }
    printf("factorial is %d",fact);
    return (0);
}