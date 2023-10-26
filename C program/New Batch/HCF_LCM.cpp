#include<stdio.h>
int main(){
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    int hcf;
    int lcm;
    // int maxm = (a>b)?a:b;
    int minm = (a<b)?a:b;
    // for(int i=maxm;i<=a*b;i++){
    //     if(i%a==0 && i%b==0){
    //         lcm = i;
    //         break;
    //     }
    // }
    for(int i=minm;i>=1;i--){
        if(a%i==0 && b%i==0){
            hcf = i;
            break;
        }
    }
    lcm = (a*b)/hcf;
    printf("\nLCM: %d",lcm);
    printf("\nHCF: %d",hcf);
    return 0;
}