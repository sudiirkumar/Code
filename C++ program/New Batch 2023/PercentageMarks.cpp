#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e;
    a = 50;
    b = 35;
    c = 56;
    d = 78;
    e = 76;
    int total = a+b+c+d+e;
    cout<<"Total marks is "<<total<<endl;
    float perc = (total / float(500)) * 100;
    cout<<"Percentage: "<<perc<<endl;
    return 0;
}