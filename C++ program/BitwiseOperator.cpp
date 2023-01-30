#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    cout<<"a&b "<<(a&b)<<endl;//Bitwise AND
    cout<<"a|b "<<(a|b)<<endl;//Bitwise OR
    cout<<"~a "<<(~a)<<endl;//Bitwise NOT
    cout<<"a>>b "<<(a>>b)<<endl;//Bitwise Right shift
    cout<<"a<<b "<<(a<<b)<<endl;//Bitwise Left shift
    cout<<"a^b "<<(a^b)<<endl;//Bitwise XOR
    cout<<"(a^b)^a"<<((a^b)^a)<<endl;
    cout<<"(a^b)^b"<<((a^b)^b)<<endl;
    return 0;
}