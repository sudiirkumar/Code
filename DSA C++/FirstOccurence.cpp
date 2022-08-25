#include<bits/stdc++.h>
using namespace std;
int firstOcc1(int *a,int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(a[i]==key){
        return i;
    }
    else{
        int ret = firstOcc1(a,n,i+1,key);
        return ret==-1?-1:ret;
    }
}
int firstOcc2(int *a,int n,int key){
    if(n==0){
        return -1;
    }
    if(a[0]==key){
        return 0;
    }
    int ret = firstOcc2(a+1,n-1,key);
    return ret==-1?-1:ret+1;
}
int main(){
    int n;
    cin>>n;
    int *a = new int[n];
    int key;
    cin>>key;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<firstOcc1(a,n,0,key)<<endl;
    cout<<firstOcc1(a,n,0,key)<<endl;
    return 0;
}