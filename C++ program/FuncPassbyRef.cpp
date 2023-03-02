#include<iostream>
using namespace std;
int inc(int a){
    a++;
    return a;
}
void swap(int *p,int *q){
    int t = *p;
    *p = *q;
    *q = t;
}
int main(){
    int a = 10;
    int b = 20;
    cout<<a<<" "<<b<<endl;
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0;
}