#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    string hexa_decimal = "";
    int rem;
    while(num!=0){
        rem = num%16;
        num /= 16;
        if(rem>=10){
            hexa_decimal += char('A' + rem - 10);
        }
        else{
            hexa_decimal += char('0'+rem);
        }
    }
    reverse(hexa_decimal.begin(),hexa_decimal.end());
    cout<<hexa_decimal<<endl;
    return 0;
}