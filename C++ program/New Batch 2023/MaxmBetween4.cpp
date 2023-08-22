#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Enter 4 numbers: ";
    cin>>a>>b>>c>>d;
    // if(a>b and a>c and a>d){
    //     cout<<a<<" is greatest."<<endl;
    // }
    // else if(b>c and b>d){
    //     cout<<b<<" is greatest."<<endl;
    // }
    // else if(c>d){
    //     cout<<c<<" is greatest."<<endl;
    // }
    // else{
    //     cout<<d<<" is greatest."<<endl;
    // }
    cout<<max(a,max(b,max(c,d)))<<" is greatest."<<endl;
    return 0;
}