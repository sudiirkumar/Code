#include<iostream>
using namespace std;
int main(){
    int term = 1;
    int sum = 0;
    for(int i=0;i<8;i++){
        sum += term;
        term = (term*10) + 1;
    }
    cout<<"Sum is "<<sum<<endl;
    return 0;
}