#include<iostream>
using namespace std;
int a;
int n;
void print(){
    cout<<n<<endl;
    a = 20;
}
int main(){
    n = 10;
    cout<<a<<endl;
    cout<<n<<endl;
    print();
    cout<<a<<endl;
    return 0;
}