#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void countingSort(int arr[],int n){
    int maxm=INT_MIN;
    for(int i=0;i<n;i++)
        maxm = max(maxm,arr[i]);
    vector<int> freq(maxm+1,0);

    for(int i=0;i<n;i++)
        freq[arr[i]]++;
    int j=0;
    for(int i=0;i<=maxm;i++){
        while(freq[i]>0){
            arr[j++] = i;
            freq[i]--;
        }
    }
}
int main(){
    int arr[]={12,23,45,4,24,27,86,3,67,24};
    int n = sizeof(arr)/sizeof(int);
    //display the original array
    cout<<"Original array : \n";
    for(auto x : arr){
        cout<<x<<" ";
    }
    //calling the counting sort function
    countingSort(arr,n);
    //display the sorted array
    cout<<"\nSorted array : \n";
    for(auto x : arr){
        cout<<x<<" ";
    }
    return 0;
}