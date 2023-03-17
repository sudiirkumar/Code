#include<iostream>
using namespace std;
bool isSorted(int arr[],int n,int i){
    //base case
    if(n==1){
        return true;
    }
    //recursive case
    bool subAns = isSorted(arr,n-1,i+1);
    return (arr[i]<arr[i+1] & subAns);
}
int main(){
    int arr[] = {1,2,6,4,5,8};
    int n = sizeof(arr)/sizeof(int); 
    cout<<isSorted(arr,n,0);
    return 0;
}