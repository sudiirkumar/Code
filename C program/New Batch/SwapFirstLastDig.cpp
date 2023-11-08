#include<stdio.h>
int pow(int b,int e){
    int ans=1;
    for(int i=0;i<e;i++){
        ans *= b;
    }
    return ans;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int num = n;
    int fdig;
    int ldig = num%10;
    while(num>0){
        fdig = num%10;
        num /= 10;
    }
    int ans = 0;
    ans = fdig;
    n /= 10;
    int dig;//2
    int i=1;
    while(n>10){
        dig = n%10;
        ans = dig*pow(10,i++) + ans;
        n /= 10;
    }
    ans = ldig*pow(10,i)+ans;
    printf("Answer: %d",ans);
    return 0;
}