#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;
    switch(a>b and a>c){
        case true: cout<<a<<" is greatest"<<endl;
                break;
        case false: switch(b>c){
                        case true:  cout<<b<<" is greatest."<<endl;
                                    break;
                        case false: cout<<c<<" is greatest."<<endl;
                                    break;
                    }
    }
    return 0;
}