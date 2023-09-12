#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string bin = "";
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int rem;
    while(num!=0){
        rem = num%2;
        bin += (rem==1 ? '1':'0');
        num /= 2;
    }
    reverse(bin.begin(),bin.end());
    cout<<"Binary: "<<bin<<endl;
    return 0;
}