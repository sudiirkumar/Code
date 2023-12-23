#include<iostream>
using namespace std;
int factorial(int num){
    if(num<0){
        return -1;
    }
    int ans = 1;
    for(int i=1;i<=num;i++){
        ans = ans*i;
    }
    return ans;
}
int ncr(int n,int r){
    if(n<r){
        return -1;
    }
    int ans = factorial(n)/(factorial(r)*factorial(n-r));
    return ans;
}
int npr(int n,int r){
    if(n<r){
        return -1;
    }
    int ans = factorial(n)/factorial(n-r);
    return ans;
}
int main(){
    int n,r;
    cout<<"Enter values of n and r: ";
    cin>>n>>r;
    cout<<ncr(n,r)<<endl;
    cout<<npr(n,r)<<endl;
    return 0;
}