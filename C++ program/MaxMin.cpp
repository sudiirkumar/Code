#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    int maxm = INT_MIN;
    int minm = INT_MAX;
    for(int i=0;i<10;i++){
        cout<<"Enter a number: ";
        cin>>n;
        minm = min(minm,n);
        maxm = max(maxm,n);
    }
    cout<<"Maxm: "<<maxm<<" Minm: "<<minm<<endl;
    return 0;
}