#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if((num&1)==1){
        cout<<"LSB is a set bit"<<endl;
    }
    else{
        cout<<"LSB is not a set bit"<<endl;
    }
    int n = 1<<((sizeof(num)*8)-1);
    if((num&n)==n){
        cout<<"MSB is a set bit"<<endl;
    }
    else{
        cout<<"MSB is not a set bit"<<endl;
    }
    return 0;
}