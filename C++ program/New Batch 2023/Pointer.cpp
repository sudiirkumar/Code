#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *p = &a;//0x61ff08
    cout<<a<<endl;//10
    cout<<&a<<endl;//0x61ff08
    cout<<p<<endl;//0x61ff08
    cout<<*p<<endl;//10
    cout<<&(*p)<<endl;//0x61ff08
    cout<<*(&p)<<endl;//0x61ff08
    int &b = a;
    cout<<&b<<endl;//100
    cout<<b<<endl;//10
    return 0;
}