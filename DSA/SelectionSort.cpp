#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        int minm=i;
        for(int j=i+1;j<n;j++)
            if(arr[minm]>arr[j])
                minm=j;
        swap(arr[i],arr[minm]);
    }
}
int main(){
    int arr[]={12,23,45,4,24,27,-86,3,-67,24};
    int n = sizeof(arr)/sizeof(int);
    //display the original array
    cout<<"Original array : \n";
    for(auto x : arr){
        cout<<x<<" ";
    }
    //calling the selection sort function
    selectionSort(arr,n);
    //display the sorted array
    cout<<"\nSorted array : \n";
    for(auto x : arr){
        cout<<x<<" ";
    }
    return 0;
}