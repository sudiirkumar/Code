#include<bits/stdc++.h>
using namespace std;
int subArrSum(int arr[],int n){
    int maxm=INT_MIN;
    int current_sum = 0;
    for(int i=0;i<n;i++){
        current_sum = arr[i] + current_sum;
        if(current_sum<0)
            current_sum = 0;
        maxm = max(current_sum,maxm);
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
    cout<<"\nThe maximum sub-array sum is : "<<subArrSum(arr,n);
    return 0;
}