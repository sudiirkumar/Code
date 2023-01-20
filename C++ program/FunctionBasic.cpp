#include<iostream>
#include<cmath>
using namespace std;
/*
return_type function_name(parameter or arguments){
    function body


    return;
}
*/
int square(int n){
    return n*n;
}
int factorial(int n){
    if(n==0){
        return 1;
    }
    int fact=1;
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    return fact;
}
int nCr(int n,int r){
    if(r==0 or n==r){
        return 1;
    }
    int ans = factorial(n)/(factorial(r)*factorial(n-r));
    return ans;
}
void printNum(int n){
    for(int i=1;i<=n;i++){
        if(i==13){
            return;
        }
        cout<<i<<" ";
    }
    cout<<endl;
}
bool isEven(int n){
    if(n%2==0){
        return true;
    }
    return false;
}
bool isPrime(int n){
    if(n==1 || n==0){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    // int n,r;
    // cin>>n>>r;
    // int ans = nCr(n,r);
    // cout<<ans<<endl;
    int n;
    cin>>n;
    // cout<<square(n)<<endl;
    // printNum(n);
    
    // if(isEven(n)){
    //     cout<<"Even";
    // }
    // else{
    //     cout<<"Odd";
    // }
    // cout<<(isEven(n)?"Even":"Odd");
    cout<<(isPrime(n)?"Prime":"Not prime");
    return 0;
}