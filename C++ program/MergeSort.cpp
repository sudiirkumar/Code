#include<iostream>
#include<vector>
using namespace std;
void merge(int a[],int s,int e){
    int mid = (s+e)/2;
    int i = s;
    int j = mid+1;
    vector<int> temp;
    while(i<=mid && j<=e){
        if(a[i]<a[j]){
            temp.push_back(a[i]);
            i++;
        }
        else{
            temp.push_back(a[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(a[i]);
        i++;
    }
    while(j<=e){
        temp.push_back(a[j]);
        j++;
    }
    i=s;
    for(int x : temp){
        a[i] = x;
        i++;
    }

}
void mergeSort(int a[],int s,int e){
    if(s>=e){//e-s<=0
        return;
    }
    int mid = (s+e)/2;
    //calling merge sort onto both parts
    mergeSort(a,s,mid);
    mergeSort(a,mid+1,e);
    //merge two parts
    merge(a,s,e);
}
int main(){
    int a[] = {9,3,5,2,14,12};
    int n = sizeof(a)/sizeof(int);
    cout<<"Before sorting: "<<endl;
    for(int x : a){
        cout<<x<<" ";
    }
    mergeSort(a,0,n-1);
    cout<<endl<<"After sorting: "<<endl;
    for(int x : a){
        cout<<x<<" ";
    }
    return 0;
}