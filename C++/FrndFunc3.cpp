#include<iostream>
using namespace std;
class A{
    int x = 5;
    friend class B;
};
class B{
    public:
        void disp(A &a){
            cout<<"Value is x is : "<<a.x;
        }
};
int main(){
    A a;
    B b;
    b.disp(a);
    return 0;
}