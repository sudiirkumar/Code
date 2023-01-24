#include<iostream>
#include<cmath>
using namespace std;
int sum(int n1,int n2){
    int sum = n1+n2;
    return sum;
}
bool isEven(int n){
    if(n%2==0){
        return 1;
    }
    return 0;
}
bool isPrime(int n){
    if(n==1 || n==0){
        return 0;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
long long power(int base,int exp){
    long long ans = 1;
    for(int i=0;i<exp;i++){
        ans = ans*base;
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
int maxm2(int a,int b){
    // if(a>b){
    //     return a;
    // }
    // return b;
    return a>b?a:b;
}
int minm2(int a,int b){
    // if(a<b){
    //     return a;
    // }
    // return b;
    return a<b?a:b;
}
int maxm3(int a,int b,int c){
    // if(a>b && a>c){
    //     return a;
    // }
    // else if(b>c){
    //     return b;
    // }
    // return c;

    // return (a>b and a>c)?a:(b>c)?b:c;

    return maxm2(a,maxm2(b,c));
}
int minm3(int a,int b,int c){
    // if(a<b && a<c){
    //     return a;
    // }
    // else if(b<c){
    //     return b;
    // }
    // return c;

    // return (a<b and a<c)?a:(b<c)?b:c;

    return minm2(a,minm2(b,c));
}
int main(){
    int a,b;
    cin>>a>>b;
    // int ans = sum(a,b);
    // cout<<ans<<endl;
    // cout<<isEven(a)<<endl;
    // cout<<isEven(b)<<endl;
    cout<<(isEven(a)?"Even":"Odd")<<endl;
    cout<<(isEven(b)?"Even":"Odd")<<endl;
    cout<<(isPrime(a)?"Prime":"Not prime")<<endl;
    cout<<(isPrime(b)?"Prime":"Not prime")<<endl;
    cout<<power(a,b)<<endl;
    cout<<reverse(a)<<endl;
    cout<<reverse(b)<<endl;
    cout<<min(a,b)<<endl;
    cout<<max(a,b)<<endl;
    int c;
    cin>>c;
    cout<<maxm3(a,b,c)<<endl;
    cout<<max(a,max(b,c))<<endl;
    return 0;
}
