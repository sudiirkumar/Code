#include<bits/stdc++.h>
using namespace  std;
int lis(vector<int> arr){
    int n=arr.size();
    int maxmLen=1;
    vector<int> dp(n,1);
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j]){
                dp[i] = max(dp[i],1+dp[j]);
                maxmLen = max(maxmLen,dp[i]);
            }
        }
    }
    return maxmLen;
}
int main(){
    vector<int> arr={50,4,10,8,30,100};
    cout<<lis(arr)<<endl;
    return 0;
}