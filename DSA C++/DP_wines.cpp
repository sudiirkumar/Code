#include<iostream>
#include<vector>
using namespace std;
int winesTD(int l,int r,int dp[][10],int prices[],int y){
    if(l>r){
        return 0;
    }
    if(dp[l][r]!=0){
        return dp[l][r];
    }
    int pick_left = y*prices[l] + winesTD(l+1,r,dp,prices,y+1);
    int pick_right = y*prices[r] + winesTD(l,r-1,dp,prices,y+1);
    return dp[l][r]=max(pick_left,pick_right);
}
int winesBU(int prices[],int n){
    vector<vector<int>> dp(n,vector<int>(n,0));
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<n;j++){
            if(i==j){
                dp[i][i] = n*prices[i];    
            }
            else if(i<j){
                int y = n-(j-i);
                int pick_left = prices[i]*y + dp[i+1][j];
                int pick_right = prices[j]*y + dp[i][j-1];

                dp[i][j] = max(pick_left,pick_right);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j:dp[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return dp[0][n-1];
}
int main(){
    int prices[] = {2,3,5,1,4};
    int n = 5;
    int dp[10][10]={0};
    cout<<winesTD(0,n-1,dp,prices,1)<<endl;
    for(int i=0;i<n;i++){
        for(int j:dp[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<winesBU(prices,n)<<endl;
    return 0;
}