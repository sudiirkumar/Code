#include<iostream>
#include<cmath>
#define ll long long
#define i int
using namespace std;
int a;//global variable
void func(){
    
    a = 2;
    i m;
    // n=10;cannot call a local variable inside under other function
    cout<<a<<endl;
}
int main(){
    a = 1;
    int n;//local variable
    cout<<a<<endl;
    cout<<"HEllo"<<endl;
    // m = 10;cannot call a local variable inside under other function
    func();
    return 0;
}