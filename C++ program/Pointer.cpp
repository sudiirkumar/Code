#include<iostream>
using namespace std;
int main(){
    int a = 5;//100
    //method 1
    int *p = &a;
    //method 2
    int *q;
    q = &a;
    cout<<a<<endl;//5
    cout<<&a<<endl;//100
    cout<<p<<endl;//100
    cout<<*p<<endl;//*(100) -> 5
    a++;
    cout<<a<<endl;//6
    cout<<*p<<endl;//6
    (*p)++;
    cout<<a<<endl;
    cout<<*p<<endl;
    return 0;
}