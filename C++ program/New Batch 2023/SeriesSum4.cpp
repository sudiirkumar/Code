#include<iostream>
using namespace std;
int main(){
    float term = 1;
    float sum = 0;
    for(int i=1;i<=9;i++){
        term = term/i;
        sum += term;
        cout<<term<<" + ";
        term *= -1;
    }
    cout<<" = "<<sum<<endl;
    cout<<"Actual sum = "<<1-sum<<endl;
    return 0;
}