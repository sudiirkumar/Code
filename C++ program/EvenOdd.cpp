#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    // if(num%2==0){
    //     cout<<"Even";
    // }
    // else{
    //     cout<<"Odd";
    // }

    // (num%2==0)?cout<<"Even":cout<<"Odd";

    cout<<((num%2==0)?"Even":"Odd");
    return 0;
}