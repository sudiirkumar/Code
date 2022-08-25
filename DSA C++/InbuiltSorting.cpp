#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={12,23,45,4,24,27,-86,3,-67,24};
    int n=sizeof(arr)/sizeof(int);
    //display the original array
    cout<<"Original array : \n";
    for(auto a : arr)
        cout<<a<<" ";
    //calling the sort function
    sort(arr,arr+n);
    //display the sorted array
    cout<<"\nSorted array : \n";
    for(auto a : arr)
        cout<<a<<" ";
    return 0;
}