#include<iostream>
using namespace std;
int main(){
    float sum=0;
    for(int i=1;i<=10;i++){
        sum = sum + (1.0/(2*i-1));
    }
    cout<<sum<<endl;
    return 0;
}