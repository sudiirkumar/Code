#include<iostream>
using namespace std;
int partition(int a[],int s,int e){
    int i = s-1;
    int j = s;
    int pivot = e;
    while(j<pivot){
        if(a[j]<a[pivot]){
            i++;
            swap(a[i],a[j]);
        }
        j++;
    }
    swap(a[i+1],a[pivot]);
    return i+1;
}
void quickSort(int a[],int s,int e){
    if(s>=e){
        return;
    }
    int p = partition(a,s,e);
    quickSort(a,s,p-1);
    quickSort(a,p+1,e);
}
int main(){
    int a[] = {9,3,15,2,14,12};
    int n = sizeof(a)/sizeof(int);
    cout<<"Before sorting: "<<endl;
    for(int x : a){
        cout<<x<<" ";
    }
    quickSort(a,0,n-1);
    cout<<endl<<"After sorting: "<<endl;
    for(int x : a){
        cout<<x<<" ";
    }
    return 0;
}