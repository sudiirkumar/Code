#include<iostream>
using namespace std;
int power(int n,int e){
    int ans=1;
    for (int i = 0; i < e; i++)
        ans *= n;
    return ans;
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int rem;
    int base = 8;
    int bin = 0;
    int i=0;
    while(num!=0){
        rem = num%base;
        num /= base;
        bin = rem*power(10,i) + bin;
        i++;
    }
    cout<<bin<<endl;
    return 0;
}