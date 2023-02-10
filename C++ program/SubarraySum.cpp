#include<iostream>
#include<climits>
using namespace std;
int maxSubArraySum(int a[],int n){//O(N^3)
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum = 0;
            for(int k=i;k<=j;k++){
                // cout<<a[k]<<" ";
                sum += a[k];
            }
            // cout<<endl<<"Sum: "<<sum<<endl;
            maxSum = max(maxSum,sum);
        }
    }
    return maxSum;
}
int maxSubArraySum2(int a[],int n){//O(N^2)
    int maxSum = INT_MIN;
    int ps[n];
    ps[0] = a[0];
    for(int i=1;i<n;i++){
        ps[i] = ps[i-1] + a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum = i==0 ? ps[j] : ps[j] - ps[i-1];
            // cout<<endl<<"Sum: "<<sum<<endl;
            maxSum = max(maxSum,sum);
        }
    }
    return maxSum;
}
int main(){
    int a[] = {12,5,-23,12,-4,11};
    int n = sizeof(a)/sizeof(int);
    int ans = maxSubArraySum2(a,n);
    cout<<ans<<endl;
    return 0;
}