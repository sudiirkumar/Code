#include<iostream>
using namespace std;
void insertionSort(int a[],int n){
    for(int i=1;i<n;i++){
        int curr = a[i];
        int prev = i-1;
        while(prev>=0 and a[prev]>curr){
            if(a[prev]>curr){
                a[prev+1] = a[prev];
            }
            prev--;
        }
        a[prev+1] = curr;
    }
}
int main(){
    int a[] = {4,3,-1,34,49,3,-100,2,1};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"Before sorting: "<<endl;
    for(int x: a){
        cout<<x<<" ";
    }
    cout<<endl;
    insertionSort(a,n);
    cout<<"After sorting: "<<endl;
    for(int x: a){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}