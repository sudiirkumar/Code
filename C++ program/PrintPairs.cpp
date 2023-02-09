#include<iostream>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5,6};
    int n = sizeof(a)/sizeof(int);
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            // cout<<"("<<a[i]<<","<<a[j]<<")"<<endl;
            if(a[i]+a[j]==k){
                cout<<a[i]<<", "<<a[j]<<endl;
                break;
            }
        }
    }
    return 0;
}