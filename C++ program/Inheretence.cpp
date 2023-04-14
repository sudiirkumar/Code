#include<iostream>
using namespace std;
class A{
public:
    int a;
};
class B : public A{
public:
    int b;
};
class C : public A{
public:
    int c;
};
class F : public C,public B{
public:
    int f;
};
class G : public C{
public:
    int g;
};
int main(){
    F obj;
    return 0;
}