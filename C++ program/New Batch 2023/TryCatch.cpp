#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    try{
        if(a>=18){
            cout<<"You are eligible"<<endl;
            cout<<"Congrats!!!"<<endl;
        }
        else{
            throw a;
        }
    }
    catch(int b){
        cout<<"Age cannot be less than 18"<<endl;
        cout<<"Age entered by you: "<<b<<endl;
    }
    return 0;
}