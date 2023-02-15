#include<iostream>
using namespace std;
void bubbleSort(int a[],int n){//O(N^2)
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
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
    bubbleSort(a,n);
    cout<<"After sorting: "<<endl;
    for(int x: a){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}