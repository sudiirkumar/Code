#include<math.h>
int power(int base,int exp){
    int ans=1;
    for(int i=0;i<exp;i++){
        ans = ans*base;
    }
    return ans;
}
int isEven(int num){//definition
    return num%2==0;
}
int isPositive(int num){
    return num>0;
}
int square(int num){
    int square = num*num;
    return square;
}
int max(int a,int b){
    return a>b?a:b;
}
int min(int a,int b){
    return a<b?a:b;
}
int isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int reverse(int n){//n=123
    int rev = 0;//321
    while(n!=0){
        int digit = n%10;
        rev = rev*10 + digit;
        n = n/10;
    }
    return rev;
}
int isArmstrong(int n){
    int temp = n;
    int sum=0;
    while(temp!=0){
        int digit = temp%10;
        sum += power(digit,3);
        temp /= 10;
    }
    return n==sum;
}
int factorial(int n){
    if(n==0)
        return 1;
    if(n<0)
        return -1;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}
int isStrong(int n){
    int temp=n;
    int digit;
    int sum=0;
    while(temp!=0){
        digit = temp%10;
        sum += factorial(digit);
        temp /= 10;
    }
    return sum==n;
}
