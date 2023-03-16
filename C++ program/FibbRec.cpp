#include<iostream>
using namespace std;
int fibb(int n){
    //base case

    // if(n==0){
    //     return 0;
    // }
    // if(n==1){
    //     return 1;
    // }

    if(n==0 or n==1){
        return n;
    }
    //recursive case
    int f1 = fibb(n-1);
    int f2 = fibb(n-2);
    return f1+f2;
    //return fibb(n-1) + fibb(n-2);
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<fibb(num)<<endl;
    return 0;
}