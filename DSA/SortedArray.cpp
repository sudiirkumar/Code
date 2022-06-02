#include<bits/stdc++.h>
using namespace std;
bool sortedArray1(int *a,int l){//checking from last end
    if(l==0){
        return true;
    }
    if(a[l]>a[l-1]){
        return sortedArray1(a,l-1) && a[l]>a[l-1];
    }
    else
        return false;
}
bool sortedArray2(int *a,int n){//checking from front end
    if(n==1 or n==0){
        return true;
    }
    if(a[0]<a[1] and sortedArray2(a+1,n-1))
        return true;
    return false;
}
int main(){
    int n;
    cin>>n;
    int *a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<sortedArray1(a,n-1)<<endl;
    cout<<sortedArray2(a,n-1)<<endl;
    return 0;
}