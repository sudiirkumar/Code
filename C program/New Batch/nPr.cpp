#include<stdio.h>
int factorial(int num){
    if(num<0){
        return -1;
    }
    if(num==0 || num==1){
        return 1;
    }
    int fact = 1;
    for(int i=2;i<=num;i++){
        fact *= i;
    }
    return fact;
}
int nCr(int n,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int nPr(int n,int r){
    return factorial(n)/factorial(n-r);
}
int main(){
    int n,r;
    printf("Enter n and r: ");
    scanf("%d%d",&n,&r);
    if(n<r){
        printf("Not possible to calculate");
        return 0;
    }
    printf("nPr : %d",nPr(n,r));
    printf("\nnCr : %d",nCr(n,r));
    return 0;
}