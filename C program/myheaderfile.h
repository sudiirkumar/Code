#include<stdio.h>
int max(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}
int max(int a,int b,int c){//a = 100, b = 43, c = 23
    if(a>b && a>c){
        return a;
    }
    if(b>c){
        return b;
    }
    return c;

    // return (a>b && a>c)?a:(b>c)?b:c;
}
int min(int a,int b,int c){
    if(a<b && a<c){
        return a;
    }
    if(b<c){
        return b;
    }
    return c;
}
int min(int a,int b){
    if(a<b){
        return a;
    }
    return b;
}
int power(int base,int exp){
    if(exp==0){
        return 1;
    }
    int ans = 1;
    for(int i=1;i<=exp;i++){
        ans = ans*base;
    }
    return ans;
}
int factorial(int n){
    if(n==0){
        return 1;
    }
    int ans = 1;
    for(int i=1;i<=n;i++){
        ans = ans*i;
    }
    return ans;
}
int reverse(int n){
    int rev = 0;
    int dig;
    while(n>0){
        dig = n%10;
        rev = rev*10 + dig;
        n = n/10;
    }
    return rev;
}
int isPalindrome(int n){
    if(n==reverse(n)){
        return 1;
    }
    return 0;
}