#include<iostream>
using namespace std;
class A{
    int a;
protected:
    int b;
public:
    friend class B;
    friend void changeVal();
};
class B{
    A obj;
public:
    void change(){
        obj.a = 10;
        obj.b = 20;
    }
    void print(){
        cout<<obj.a<<" "<<obj.b<<endl;
    }
};
void changeVal(){
    A obj;
    obj.a = 10;
    obj.b = 20;
    cout<<obj.a<<" "<<obj.b<<endl;
}
int main(){
    changeVal();
    return 0;
}