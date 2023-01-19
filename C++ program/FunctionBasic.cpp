#include<iostream>
using namespace std;
/*
return_type function_name(parameter or arguments){
    function body


    return;
}
*/
int factorial(int n){
    if(n==0){
        return 1;
    }
    int fact=1;
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    return fact;
}
int nCr(int n,int r){
    if(r==0 or n==r){
        return 1;
    }
    int ans = factorial(n)/(factorial(r)*factorial(n-r));
    return ans;
}
int main(){
    int n,r;
    cin>>n>>r;
    int ans = nCr(n,r);
    cout<<ans<<endl;
    return 0;
}