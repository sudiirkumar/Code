// Check if a number is even or odd without using % operator.
#include<iostream>
using namespace std;
int main(){
    int n = 130;// 1101 & 0001 = 1
    if((n&1)){
        cout<<"Odd"<<endl;
    }
    else{
        cout<<"Even"<<endl;
    }
    return 0;
}