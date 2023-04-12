#include<iostream>
using namespace std;
class A{
    int a;
    int b;
    int c;
public:
    A(int a,int b,int c){
       this->a = a;
       this->b = b;
       this->c = c;
    }
    A(){
        a = b = c = 0;
    }
    A(int n){
        a = b = c = n;
    }
    ~A(){//destructor
        this->printValues();
        cout<<"Object deleted"<<endl;
        a = 0;
        b = 0;
        c = 0;
    }
    void printValues(){
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
};
int main(){
    A a1;//default
    a1.printValues();
    A a2(2);//parametrised
    a2.printValues();
    A a3(2,5,8);
    a3.printValues();
    A a4(a3);
    a4.printValues();
    return 0;
}
