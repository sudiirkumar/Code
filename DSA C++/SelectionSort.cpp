#include<iostream>
using namespace std;
void print(int arr[],int n){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void selectionSort(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        int minm=i;
        for(int j=i+1;j<n;j++)
            if(arr[minm]>arr[j])
                minm=j;
        swap(arr[i],arr[minm]);
        print(arr,n);
    }
}
int main(){
    int arr[]={1,5,9,-6,3,2,-8};
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