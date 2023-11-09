#include<stdio.h>
int main(){
    int base,exp;//2,5
    printf("Enter base and exp: ");
    scanf("%d%d",&base,&exp);
    int ans = 1;//2*2*2*2*2
    for(int i=1;i<=exp;i++){
        ans = ans*base;
    }
    printf("Value: %d",ans);
    return 0;
}