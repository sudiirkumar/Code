#include<iostream>
using namespace std;
int main(){
    int number = 10;//short,int, long, long long, float, double, bool, char
    cout<<"The value of variable is "<<number<<endl;
    int a,b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    cout<<"Values are: "<<a<<" and "<<b<<endl;
    int sum = a+b;//15+12
    int diff = a-b;//15-12
    int product = a*b;//15*12
    int quotient = b/a;//12/15
    int remainder = a%b;//15%12
    cout<<"Sum: "<<sum<<endl;
    cout<<"Diff: "<<diff<<endl;
    cout<<"Product: "<<product<<endl;
    cout<<"Quotient: "<<quotient<<endl;
    cout<<"Remainder: "<<remainder<<endl;
    return 0;
}