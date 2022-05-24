#include<iostream>
using namespace std;
unsigned int toBinary(int n){
    unsigned int bin = 0;
    while(n>0){
        int temp = n&1;
        bin = bin*10 + temp;
        n = n>>1;
    }
    return bin;
}
int main(){
    int n;
    cin>>n;
    cout<<toBinary(n)<<endl;

    return 0;
}