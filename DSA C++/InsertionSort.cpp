#include<iostream>
using namespace std;
void print(int arr[],int n){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int j;
        int x = arr[i];
        for(j=i-1;j>=0;j--){
            if(arr[j]>x){
                arr[j+1]=arr[j];
                // cout<<"Shifted "<<arr[j+1]<<endl;
            }
            else
                break;
        }
        arr[j+1] = x;
        print(arr,n);
    }
}
int main(){
    int arr[]={3,7,1,5,-3,2};
    int n=sizeof(arr)/sizeof(int);
    //display the original array
    cout<<"Original array : \n";
    for(auto a : arr)
        cout<<a<<" ";
    //calling the insertion sort function
    insertionSort(arr,n);
    //display the sorted array
    cout<<"\nSorted array : \n";
    for(auto a : arr)
        cout<<a<<" ";
    return 0;
}