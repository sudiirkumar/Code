#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int sum = 0;
    int term = 1;
    while (i<=10){
        term *= 2;
        sum += term;
        i++;
    }
    cout<<"Sum is "<<sum<<endl;
    return 0;
}