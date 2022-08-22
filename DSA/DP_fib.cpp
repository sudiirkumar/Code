#include<iostream>
#include<vector>
using namespace std;
int fibb(int n,vector<int> &dp){
    if(n==1 or n==0){
        return n;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    dp[n] = fibb(n-1,dp) + fibb(n-2,dp);
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n+1,0);
    v[1]=1;
    cout<<fibb(n,v)<<endl;
    return 0;
}