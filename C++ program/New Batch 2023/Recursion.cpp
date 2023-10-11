#include<iostream>
using namespace std;
void printNto1(int n){
    if(n==1){//Base case
        cout<<n<<endl;
        return;
    }
    //Recursive case
    cout<<n<<" ";
    printNto1(n-1);
}
void print1toN(int n){
    if(n==1){//Base case
        cout<<n<<" ";
        return;
    }
    //Recursion case
    print1toN(n-1);
    cout<<n<<" ";
}
int main(){
    int n = 10;
    printNto1(n);
    print1toN(n);
    return 0;
}