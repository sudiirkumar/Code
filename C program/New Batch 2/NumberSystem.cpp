#include<stdio.h>
int pow(int base, int exp){
    int ans = 1;
    for(int i=0;i<exp;i++){
        ans *= base;
    }
    return ans;
}
int decimalToOther(int num, int r){
    int ans = 0;
    int rem;
    int i=0;
    while(num>0){
        rem = num%r;
        ans = rem*pow(10,i) + ans;
        i++;
        num /= r;
    }
    return ans;
}
int otherToDecimal(int num,int r){
    int ans = 0;
    int lastDig;
    int i=0;
    while(num>0){
        lastDig = num%10;
        ans = lastDig*pow(r,i) + ans;
        i++;
        num /= 10;
    }
    return ans;
}
int main(){
    int num,base;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter base to into: ");
    scanf("%d",&base);
    printf("Converted number: %d",decimalToOther(num,base));
    return 0;
}