#include<iostream>
using namespace std;
int main(){
    int a = 5;
    //method 1
    int *p = &a;
    //method 2
    int *q;
    q = &a;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    a++;
    cout<<a<<endl;
    cout<<*p<<endl;
    (*p)++;
    cout<<a<<endl;
    cout<<*p<<endl;
    return 0;
}