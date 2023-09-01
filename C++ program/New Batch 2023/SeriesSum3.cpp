#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int term = 1;
    for(int i=1;i<=8;i++){
        term *= i;
        sum += term;
    }
    cout<<sum<<endl;
    return 0;
}