#include<stdio.h>
int main(){
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    int minm,maxm;
    if(a>b){
        maxm = a;
        minm = b;
    }
    else{
        maxm = b;
        minm = a;
    }
    int hcf,lcm;
    for(int i=minm;i>=1;i--){
        if(a%i==0 && b%i==0){
            hcf = i;
            break;
        }
    }
    for(int i=maxm;i<=a*b;i++){
        if(i%a==0 && i%b==0){
            lcm = i;
            break;
        }
    }
    printf("\nLCM: %d",lcm);
    printf("\nHCF: %d",hcf);
    return 0;
}