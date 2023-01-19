#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int count1=0;
    int count0=0;
    int len = sizeof(num) * 8;
    for(int i=0;i<32;i++){
        if((num&1)==1){
            count1++;
        }
        else{
            count0++;
        }
        num = num>>1;
    }
    cout<<"Number of zeroes: "<<count0<<endl;
    cout<<"Number of ones: "<<count1<<endl;
    return 0;
}