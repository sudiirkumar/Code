#include<stdio.h>
int main(){
    int base;
    int power;
    printf("Enter base and power: ");//2 5  = 2^5 = 32
    scanf("%d%d",&base,&power);
    int ans=1;
    for(int i=0;i<power;i++){
        ans = ans*base;
    }
    printf("%d to the power %d is %d.",base,power,ans);
    return 0;
}