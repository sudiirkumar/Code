#include<iostream>
#include<climits>
using namespace std;
int main(){
    //Numbers -> Integers -> short, int, long long
    short newShortVariable;//Declaration
    newShortVariable = 10;//Initialization
    cout<<"The value in short type variable is "<<newShortVariable<<endl;
    cout<<sizeof(newShortVariable)<<endl;//2 Bytes
    int newIntVariable = 1000;//Declaration and initialization
    cout<<sizeof(newIntVariable)<<endl;//4 Bytes
    cout<<INT_MAX<<endl;
    cout<<INT_MIN<<endl;
    long long newLongVariable;//8 Bytes
    cout<<sizeof(newLongVariable)<<endl;
    cout<<LONG_LONG_MIN<<endl;
    cout<<LONG_LONG_MAX<<endl;
    //Floating value
    float newFloatVariable;
    double newDoubleVariable;
    cout<<sizeof(newFloatVariable)<<endl;
    cout<<sizeof(newDoubleVariable)<<endl;
    //Character
    char ch = '_';
    cout<<sizeof(ch)<<endl;
    //Boolean
    bool b = true;
    cout<<sizeof(b)<<endl;
    //String
    string name = "Aman";
    cout<<name<<endl;
    return 0;
}