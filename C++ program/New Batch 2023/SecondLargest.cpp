#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;
    if(a>b and a>c){
        if(b>c){
            cout<<b<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
    else if(b>c){
        if(a>c){
            cout<<a<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
    else{
        if(a>b){
            cout<<a<<endl;
        }
        else{
            cout<<b<<endl;
        }
    }
    return 0;
}