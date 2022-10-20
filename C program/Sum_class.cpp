#include<iostream>
using namespace std;

class A{
public:
    int a;
    int b;
    int sum;
};
int main(){
    A obj;
    obj.a = 10;
    obj.b = 15;
    obj.sum = obj.a + obj.b;
    cout<<"Sum is "<<obj.sum<<endl;
    return 0;
}