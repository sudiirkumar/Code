#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int coinChangeTD(int n,vector<int> coin,vector<int> &dp){
    if(n==0){
        return 0;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    int ans=INT_MAX;
    for(int c:coin){
        if(n-c>=0){
            int subProb = coinChangeTD(n-c,coin,dp);
            ans = min(ans,subProb+1);
        }
    }
    return dp[n]=ans;
}
int coinChangeBU(int n,vector<int> coin){
    vector<int> dp(n+1,0);
    dp[0]=0;
    for(int i=1;i<=n;i++){
        dp[i]=INT_MAX;
        for(int c:coin){
            if(i-c>=0){
                dp[i]=min(dp[i],dp[i-c]+1);
            }
        }
    }
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    vector<int> coin = {1,3,7,10};
    vector<int> dp(n+1,0);
    cout<<coinChangeTD(n,coin,dp)<<endl;
    cout<<coinChangeBU(n,coin)<<endl;
    return 0;
}