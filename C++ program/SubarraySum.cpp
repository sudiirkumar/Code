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
int kadaneAlgo(int a[],int n){
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i=0;i<n;i++){
        currSum += a[i];
        maxSum = max(maxSum,currSum);
        if(currSum<0){
            currSum = 0;
        }
    }
    return maxSum;
}
int main(){
    int a[] = {-5,-7,-2,2,-5,-8,-4,100};
    int n = sizeof(a)/sizeof(int);
    cout<<maxSubArraySum(a,n)<<endl;
    cout<<maxSubArraySum2(a,n)<<endl;
    cout<<kadaneAlgo(a,n)<<endl;
    return 0;
}