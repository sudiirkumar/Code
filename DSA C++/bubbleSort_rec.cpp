#include<iostream>
using namespace std;
void bubbleSort(int a[],int n){
    if(n==1 or n==0)
        return;
    for(int j=0;j<n-1;j++){
        if(a[j]>a[j+1])
            swap(a[j],a[j+1]);
    }
    bubbleSort(a,n-1);
}
void bubbleSort2(int a[],int n,int j){
    if(n==0 or n==1){
        return;
    }
    if(j==n-1){
        bubbleSort2(a,n-1,0);
        return;
    }
    if(a[j]>a[j+1])
        swap(a[j],a[j+1]);
    bubbleSort2(a,n,j+1);
}
int main(){
    int arr[]={12,32,1,2,5,34,5,45,23,-12,-2,23,-1};
    int n = sizeof(arr)/sizeof(int);
    for(int x :arr){
        cout<<x<<" ";
    }
    cout<<endl;
    bubbleSort2(arr,n,0);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}