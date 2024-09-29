#include<iostream>
using namespace std;
void print(int arr[],int n){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void bubbleSort(int arr[],int n){
    for(int i=1;i<n;i++)//the number of times we need to sort
    {
        for(int j=0;j<n-i;j++)//the iteration to take the largest element to the right most
        {
            if(arr[j]>arr[j+1])//check if the number is greater than next element
                swap(arr[j],arr[j+1]);
            print(arr,n);
        }
        cout<<endl;
    }
}
int main(){
    int arr[]={2,3,1,9,9,8};
    int n = sizeof(arr)/sizeof(int);
    //display the original array
    cout<<"Original array : \n";
    for(int x : arr){
        cout<<x<<" ";
    }
    //calling the bubble sort function
    bubbleSort(arr,n);
    //display the sorted array
    cout<<"\nSorted array : \n";
    for(int x : arr){
        cout<<x<<" ";
    }
    return 0;
}