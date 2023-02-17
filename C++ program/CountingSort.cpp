#include<iostream>
using namespace std;
void countingSort(int a[],int n,int r){//O(N)
    int count[r+1] = {0};
    for(int i=0;i<n;i++){
        int val = a[i];
        count[val]++;
    }
    int j = 0;
    int i = 0;
    while(i<n){
        while(count[j]>0){
            a[i] = j;
            i++;
            count[j]--;
        }
        j++;
    }
}
int main(){
    int a[] = {11,22,25,43,17,13,21,15,99,100,14,10,53,37,34,20};
    int n = sizeof(a)/sizeof(int);
    int range = 100;
    cout<<"Before sorting: "<<endl;
    for(int x: a){
        cout<<x<<" ";
    }
    cout<<endl<<"After sorting: "<<endl;
    countingSort(a,n,range);
    for(int x: a){
        cout<<x<<" ";
    }
    return 0;
}