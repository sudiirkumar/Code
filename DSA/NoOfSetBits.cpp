#include<iostream>
using namespace std;
int noOfSetBits(int n){
    int cnt=0;
    while(n>0){
        if(n&1)
            cnt++;
        n = n>>1;
    }
    return cnt;
}
int noOfSetBits_hack(int n){
    int cnt=0;
    while(n>0){
        n=n&(n-1);
        cnt++;
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;

    cout<<noOfSetBits(n)<<endl;
    cout<<noOfSetBits_hack(n)<<endl;
    return 0;
}