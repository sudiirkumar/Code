#include<iostream>
using namespace std;
int main(){
    int num,i;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Enter bit position: ";
    cin>>i;
    int n;
    //set
    if(i==0){
        n = 1;
    }
    else{
        n = 1<<(i-1);
    }
    cout<<"Value after set: "<<(num|n)<<endl;
    //clear
    n = ~n;
    cout<<"Value after clear: "<<(num&n)<<endl;
    n = ~n;
    cout<<"Value after toggle: "<<(num^n)<<endl;
    return 0;
}