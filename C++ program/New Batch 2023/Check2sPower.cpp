#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if((n&(n-1))==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
//  1   2   4   8   16      32      64       128
//  1  10  100 1000 10000  100000  1000000 10000000
// 0    1       3       7       15      31      63      127
//0     1       11      0111     1111   011111    111111   1111111