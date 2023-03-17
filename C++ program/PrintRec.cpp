#include<iostream>
using namespace std;
void printNto1(int n){//top-down approach
    //base case
    if(n==0){
        return;
    }
    //recursive case
    //f(n) = print(n) and f(n-1)
    cout<<n<<" ";
    printNto1(n-1);
}
void print1toN(int n,int i){//top-down approach
    if(i==n+1){
        return;
    }
    cout<<i<<" ";
    print1toN(n,i+1);
}
void print1toN(int n){//bottom up approach
    if(n==0){
        return;
    }
    //recursive case
    //f(n) = print(n) and f(n-1)
    print1toN(n-1);
    cout<<n<<" ";
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    printNto1(num);
    cout<<endl;
    print1toN(num,1);
    cout<<endl;
    print1toN(num);
    return 0;
}