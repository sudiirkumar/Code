#include<iostream>
using namespace std;
bool isPowerOf2(int n){
    return (n&(n-1))==0;
}
int main(){
    int n;
    cin>>n;
    if(isPowerOf2(n))
        cout<<"Yes";
    else
        cout<<"No";

    return 0;
}