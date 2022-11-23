#include<stdio.h>
#include"aci.h"
int decToBin(int n){
    int ans=0;
    int i=0;
    while(n!=0){
        int bit = n&1;
        ans = bit * power(10,i) + ans;
        n = n>>1;
        i++;    
    }
    return ans;
}
int binToDec(int n){
    int ans=0;
    int i = 0;
    while(n!=0){
        int bit = n%10;
        ans = bit * power(2,i) + ans;
        n = n/10;
        i++;
    }
    return ans;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int bin = decToBin(n);
    printf("Binary representation of %d is: %d.\n",n,bin);
    printf("Decimal representation of %d is %d.\n",bin,binToDec(bin));
    return 0;
}