#include<iostream>
#include<vector>
using namespace std;
int partiton(vector<int> &a,int s,int e){
    int pivot = e;
    int i = s-1;
    int j = s;
    while(j<pivot){
        if(a[j]<a[pivot]){
            i++;
            swap(a[i],a[j]);
            j++;
        }
        else{
            j++;
        }
    }
    swap(a[i+1],a[pivot]);
    return i+1;
}
void quickSort(vector<int> &a,int s,int e){
    if(s>=e){
        return;
    }
    int p = partiton(a,s,e);
    quickSort(a,s,p-1);
    quickSort(a,p+1,e);
}
int main(){
    vector<int> arr = {10,5,2,0,7,6,4};
    int n = arr.size();
    for(int x : arr){
        cout<<x<<" ";
    }
    cout<<endl;
    quickSort(arr,0,n-1);
    for(int x : arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}