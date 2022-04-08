#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b){
    return a>b;
}
int main(){
    int arr_org[]={12,23,45,4,24,27,-86,3,-67,24};
    int arr1[]={12,23,45,4,24,27,-86,3,-67,24};
    int arr2[]={12,23,45,4,24,27,-86,3,-67,24};
    int arr3[]={12,23,45,4,24,27,-86,3,-67,24};
    int n=sizeof(arr_org)/sizeof(int);
    //display the original array
    cout<<"Original array : \n";
    for(auto a : arr_org)
        cout<<a<<" ";
    //calling the sort function with reverse function
    sort(arr1,arr1+n);
    reverse(arr1,arr1+n);
    //display the sorted array
    cout<<"\nSorted array by using reverse function : \n";
    for(auto a : arr1)
        cout<<a<<" ";
    //using comparator to order the array in decreasing order
    sort(arr2,arr2+n,compare);
    cout<<"\nSorted array by using comparator function : \n";
    for(auto a : arr2)
        cout<<a<<" ";
    //using greater function instead of compare function
    sort(arr3,arr3+n,greater<int>());
    cout<<"\nSorted array by using greater function : \n";
    for(auto a : arr3)
        cout<<a<<" ";
    return 0;
}