#include<iostream>
using namespace  std;
class B;
class A{
    int x;
    public:
        A(int x){
            this->x = x;
        }
        friend void min(A,B);
};
class B{
    int y;
    public:
        B(int y){
            this->y = y;
        }
        friend void min(A,B);
};
void min(A a,B b){
    if(a.x<b.y){
        cout<<"A is smaller"<<endl;
    }
    else{
        cout<<"B is smaller"<<endl;
    }
}
int main(){
    A a(10);
    B b(20);
    min(a,b);
    return 0;
}
