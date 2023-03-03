#include<iostream>
using namespace std;
void inc(int *p){
    (*p)++;
}
void inc2(int &p){
    p++;
}
void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
void swap2(int &p,int &q){
    int t = p;
    p = q;
    q = t;
}
int main(){
    int a = 10;
    int b = 20;
    cout<<a<<" "<<b<<endl;
    swap2(a,b);
    inc2(a);
    inc2(b);
    cout<<a<<" "<<b<<endl;
    return 0;
}