#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int principle,time;
    float rate;
    cout<<"Enter Principle, Rate and Time: ";
    cin>>principle>>rate>>time;
    float ci;
    ci = principle * pow(1+(rate/100),time);
    cout<<"Amount: "<<ci<<endl;
    ci = ci - principle;
    cout<<"Compound interest: "<<ci<<endl;
    return 0;
}