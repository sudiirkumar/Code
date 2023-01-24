#include<iostream>
#include<climits>
using namespace std;
int maxm(int a,int b){
    return a>b?a:b;
}
int maxm(char a, char b){
    return a>b?a:b;
}
int main(){
    cout<<maxm(11,2)<<endl;
    cout<<maxm('a','z')<<endl;
    return 0;
}