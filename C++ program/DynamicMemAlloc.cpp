#include<iostream>
using namespace std;
int main(){
    // int a = 5;
    // int *q = new int;
    // *q = 10;
    // cout<<a<<endl;
    // cout<<*q<<endl;
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    int *p = new int[n];
    for(int i=0;i<n;i++){
        p[i] = i;
    }
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
    delete p;
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
    return 0;
}