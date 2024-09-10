#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int n3 = (n-1)/3;
    int n5 = (n-1)/5;
    int n15 = (n-1)/15;
    int sum3 = n3*(3+(3*n3))/2;
    int sum5 = n5*(5+(5*n5))/2;
    int sum15 = n15*(15+(15*n15))/2;

    int sum = sum3 + sum5 - sum15;
    cout<<sum<<endl;
    return 0;
}