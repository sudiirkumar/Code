#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    cout<<arr<<endl;
    int *p = arr;
    cout<<p<<endl;
    for(int i=0;i<n;i++){
        cout<<*(p+i)<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<" ";
    }
    return 0;
}