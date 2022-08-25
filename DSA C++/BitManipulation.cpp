#include<iostream>
using namespace std;
int getIthBit(int n,int i){
    int mask = 1<<i;
    return (n&mask)>0 ? 1 : 0;
}
void setIthBit(int &n,int i){
    int mask = 1<<i;
    n = n|mask;
}
void clearIthBit(int &n,int i){
    int mask = ~(1<<i);
    n = n&mask;
}
void updateIthBit(int &n,int i,int v){
    clearIthBit(n,i);
    int mask = v<<i;
    n = n|mask;
}
void clearIBits(int &n,int i){
    int mask = -1<<i;
    n = n&mask;
}
void clearRangeBits(int &n,int i,int j){
    int a = -1<<j+1;//111111111000000000
    int b = (1<<i) - 1;//0000000001111
    int mask = a | b;//111111000001111
    n = n&mask;
}
int main(){
    int n;
    int i;
    int ans;

    n=15;
    //cin>>i;
    clearRangeBits(n,1,2);
    cout<<n<<endl;
}