#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter values of a, b and c: ";
    cin>>a>>b>>c;
    int discriminant = (b*b) - (4*a*c);
    if(discriminant>0){
        float x1,x2;
        x1 = (-b + sqrt(discriminant))/(2.0*a);
        x2 = (-b - sqrt(discriminant))/(2.0*a);
        cout<<"Two real roots are: "<<x1<<" "<<x2<<endl;
    }
    else if(discriminant==0){
        float x = (-b)/(2.0*a);
        cout<<"Equal roots: "<<x<<endl;
    }
    else{
        cout<<"Non real roots"<<endl;
    }
    return 0;
}