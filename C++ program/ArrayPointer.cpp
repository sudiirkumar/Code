#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    int *p;
    p = &arr[0];
    for(int i=0;i<n;i++){
        cout<<*(p+i)<<" ";
    }
    return 0;
}