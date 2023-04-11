#include<iostream>
using namespace std;
class A{
public:
    int a;
    int b;
    int c;
    A(int a,int b,int c){
       this->a = a;
       this->b = b;
       this->c = c;
    }
    A(){

    }
    A(int n){
        a = b = c = n;
    }
    ~A(){//destructor
        cout<<"Object deleted"<<endl;
        a = 0;
        b = 0;
        c = 0;
    }
};
int main(){
    A obj1(1);
    A obj2;
    cout<<sizeof(obj1)<<endl;
    cout<<obj1.a<<endl;
    cout<<obj1.b<<endl;
    cout<<obj1.c<<endl;
    return 0;
}
