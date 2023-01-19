#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter 2 numbers: ";
    cin>>num1>>num2;
    cout<<"Value before swapping: "<<num1<<" "<<num2<<endl;
    int x = num1^num2;
    num1 = x^num1;
    num2 = x^num2;
    cout<<"Value after swapping: "<<num1<<" "<<num2<<endl;
    return 0;
}