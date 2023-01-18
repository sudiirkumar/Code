#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    cout<<"a&b "<<(a&b)<<endl;
    cout<<"a|b "<<(a|b)<<endl;
    cout<<"~a "<<(~a)<<endl;
    cout<<"a>>b "<<(a>>b)<<endl;
    cout<<"a<<b "<<(a<<b)<<endl;
    cout<<"a^b "<<(a^b)<<endl;
    cout<<"(a^b)^a"<<((a^b)^a)<<endl;
    cout<<"(a^b)^b"<<((a^b)^b)<<endl;
    return 0;
}