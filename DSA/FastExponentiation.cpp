#include<iostream>
using namespace std;
int fastExponentiation(int a,int n){
    int ans = 1;
    while(n>0){
        if(n&1){
            ans = ans * a;
        }
        a = a*a;
        n = n>>1;
    }
    return ans;
}
int main(){
    int a,n;
    cin>>a>>n;

    cout<<fastExponentiation(a,n)<<endl;
    return 0;
}