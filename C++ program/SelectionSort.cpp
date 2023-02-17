#include<iostream>
using namespace std;
bool helper(int a,int b){
    if(a<b){
        return true;
    }
    return false;
}
void selectionSort(int a[],int n){//O(N^2)
    for(int i=0;i<n-1;i++){
        int min_pos = i;
        for(int j=i+1;j<n;j++){
            if(helper(a[j],a[min_pos])){
                min_pos = j;
            }
        }
        swap(a[i],a[min_pos]);
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
    selectionSort(a,n);
    cout<<"After sorting: "<<endl;
    for(int x: a){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}