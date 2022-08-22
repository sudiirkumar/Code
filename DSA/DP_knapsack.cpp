#include<bits/stdc++.h>
using namespace std;
int knapsackTD(int wt[],int price[],int n,int tw,int dp[][11]){
    if(n==0 or tw==0){
        return 0;
    }
    if(dp[n][tw]!=0){
        return dp[n][tw];
    }
    int inc=0,exc=0;
    if(tw-wt[n-1]>=0){
        inc = price[n-1] + knapsackTD(wt,price,n-1,tw-wt[n-1],dp);
    }
    exc = 0 + knapsackTD(wt,price,n-1,tw,dp);
    dp[n][tw]=max(inc,exc);
    return dp[n][tw];
}
int knapsackBU(int wt[],int price[],int n,int tw){
    vector<vector<int>> dp(n+1,vector<int>(tw+1,0));
    for(int i=1;i<=n;i++){
        for(int w=1;w<=tw;w++){
            int inc=0,exc=0;
            if(w-wt[i-1]>=0){
                inc = price[i-1] + dp[i-1][w-wt[i-1]];
            }
            exc = 0 + dp[i-1][tw];
            dp[i][w] = max(inc,exc);
        }
    }
    return dp[n][tw];
}
int main(){
    int n=4;
    int tw=10;
    int wt[]={1,3,4,6};
    int price[]={20,30,10,50};
    int dp[5][11]={0};
    cout<<knapsackBU(wt,price,n,tw)<<endl;
    return 0;
}