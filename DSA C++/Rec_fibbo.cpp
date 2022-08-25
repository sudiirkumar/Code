#include<iostream>
using namespace std;
int fibb(int n){
    if(n==0 or n==1){
        return n;
    }
    int f1 = fibb(n-1);
    int f2 = fibb(n-2);
    return f1+f2;
}
int main(){
    int n;
    cin>>n;
    cout<<fibb(n)<<endl;
    return 0;
}