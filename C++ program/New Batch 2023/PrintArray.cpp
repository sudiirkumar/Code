#include<iostream>
using namespace std;
int main(){
    int arr[] = {12,3,23,543,45,123,1,2};
    // int n = sizeof(arr)/sizeof(int);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    for(int n : arr){
        if(n%2==1)
            cout<<n<<" ";
    }
    return 0;
}