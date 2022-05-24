#include<iostream>
using namespace std;
void clearRangeBits(int &n,int i,int j){
    int a = -1<<j+1;//111111111000000000
    int b = (1<<i) - 1;//0000000001111
    int mask = a | b;//111111000001111
    n = n&mask;
}
void replaceRangeBits(int &n,int m,int i,int j){
    clearRangeBits(n,i,j);
    int mask = m<<i;
    n = n | mask;
}
int main(){
    int n=15;
    int i=1;
    int j=2;
    int m=2;

    replaceRangeBits(n,m,i,j);
    cout<<n<<endl;
    return 0;
}