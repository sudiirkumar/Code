#include<stdio.h>
int main(){
    int base,exp;
    printf("Enter base and exp: ");
    scanf("%d%d",&base,&exp);
    int ans = 1;
    for(int i=1;i<=exp;i++){
        ans = ans*base;
    }
    printf("Value: %d",ans);
    return 0;
}