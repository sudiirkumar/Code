#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int &b = a;//reference var
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<b<<endl;
    cout<<&b<<endl;
    a++;
    cout<<a<<endl;
    cout<<b<<endl;
    b++;
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}