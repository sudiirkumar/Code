#include<iostream>
using namespace std;
int main(){
    int a = -5;//-2^31 to 2^31-1
    cout<<"Value: "<<a<<endl;
    cout<<"Size: "<<sizeof(a)<<endl;

    unsigned int b = -4;//0 to 2^32
    cout<<"Value: "<<b<<endl;
    cout<<"Size: "<<sizeof(b)<<endl;

    short unsigned int c = 12;
    cout<<"Value: "<<c<<endl;
    cout<<"Size: "<<sizeof(c)<<endl;

    float d = 2.23;
    cout<<"Value: "<<d<<endl;
    cout<<"Size: "<<sizeof(d)<<endl;

    char ch = 97;
    cout<<"Value: "<<ch<<endl;
    cout<<"Size: "<<sizeof(ch)<<endl;

    return 0;
}