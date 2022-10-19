#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    int hcf;
    int lcm;
    for(int i=(a>b)?a:b;i<=a*b;i++){//1 to 60 || 15 to 60
        if(i%a==0&&i%b==0){
            lcm=i;
            break;
        }
    }
    for(int i=(a<b)?a:b;i>=1;i--){
        if(a%i==0&&b%i==0){
            hcf=i;
            break;
        }
    }
    printf("\nLCM = %d",lcm);
    printf("\nHCF = %d",hcf);
    return 0;
}