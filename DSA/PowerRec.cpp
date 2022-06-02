#include<iostream>
using namespace std;
long long power(int a,int n){
    if(n==0){
        return 1;
    }
    return a*power(a,n-1);
}
long long power_fast(int a,int n){
    if(n==0){
        return 1;
    }
    long long subAns = power_fast(a,n/2);
    subAns = subAns * subAns;
    if(n&1){
        return a*subAns;
    }
    return subAns;
}
int main(){
    int a,n;
    cin>>a>>n;
    cout<<power(a,n)<<endl;
    cout<<power_fast(a,n)<<endl;
    return 0;
}