#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {12,43,2,90,87,65,12};
    int n = sizeof(arr)/sizeof(int);
    cout<<"Array before sorting: \n";
    for(int num : arr){
        cout<<num<<" ";
    }
    sort(arr,arr+n);// O(nlogn)
    // reverse(arr,arr+n); // O(n)
    cout<<"\nArray after sorting: \n";
    for(int num : arr){
        cout<<num<<" ";
    }
    return 0;
}