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
    int bin = 0;
    int i=0;
    while(num!=0){
        rem = num%2;
        num /= 2;
        bin = rem*power(10,i) + bin;
        i++;
    }
    cout<<bin<<endl;
    return 0;
}