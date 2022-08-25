#include<iostream>
using namespace std;
int lastOccurence(int a[],int n,int key){
    if(n==0){
        return -1;
    }
    int res = lastOccurence(a+1,n-1,key);
    if(res==-1){
        if(a[0]==key)
            return 0;
        else
            return -1;
    }
    else
        return res+1;
}
int main(){
    int n;
    cin>>n;
    int key;
    cin>>key;
    int *a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<lastOccurence(a,n,key);
    return 0;
}