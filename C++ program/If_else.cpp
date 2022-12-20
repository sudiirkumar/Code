#include<iostream>
using namespace std;
int main(){
    int a;//15
    int b;//10
    cout<<"Enter a number: ";
    cin>>a>>b;
    if(a>b){
        cout<<a<<" is greater than "<<b<<endl;
    }
    else{
        cout<<a<<" is not greater than "<<b<<endl;
    }
    return 0;
}