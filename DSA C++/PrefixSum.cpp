#include<iostream>
#include<climits>
using namespace std;
int prefixSum(int arr[],int n){
    int prefix[n];
    int subSum;
    int maxm = INT_MIN;
    prefix[0] = arr[0];
    for(int i=1;i<n;i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++)
        {
            subSum = i>0 ? prefix[j]-prefix[i-1] : prefix[j];
            maxm = max(maxm,subSum);
        }
    }
    return maxm;
}
int main(){
    int arr[] = {1,6,2,-6,2,-4};
    int n = sizeof(arr)/sizeof(int);
    cout<<"\nThe array is : ";
    for(int x : arr){
        cout<<x<<" ";
    }
    cout<<"\nThe maximum sub-array sum is : "<<prefixSum(arr,n);
    return 0;
}