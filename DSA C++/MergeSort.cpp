#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr,int s,int e){
    int mid = (s+e)/2;
    int i = s;
    int j = mid+1;
    vector<int> temp;
    while(i<=mid && j<=e){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i++]);
        }
        else{
            temp.push_back(arr[j++]);
        }
    }
    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=e){
        temp.push_back(arr[j++]);
    }
    int k=0;
    for(i=s;i<=e;i++){
        arr[i] = temp[k++];
    }
    return;
}
void mergeSort(vector<int> &arr,int s,int e){
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);

    return merge(arr,s,e);
}
int main(){
    vector<int> arr = {12,123,6,123,-1,78,34,1,2};
    for(auto x : arr){
        cout<<x<<" ";
    }
    cout<<endl;
    mergeSort(arr,0,arr.size()-1);
    for(auto x : arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}