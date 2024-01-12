#include<stdio.h>
float sum(int a, float b){
    float sum = a+b;
    return sum;
}
int pow(int base,int exp){
    int ans=1;
    for(int i=1;i<=exp;i++){
        ans = ans*base;
    }
    return ans;
}
int max(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}
int min(int a,int b){
    if(a<b){
        return a;
    }
    return b;
}
int main(){
    float sumOfNumbers = sum(2,3.5);//function calling/use
    printf("%.2f",sumOfNumbers);
    printf("\n%d",pow(2,5));
    printf("\n%d",max(8,max(4,max(15,60))));
    return 0;
}