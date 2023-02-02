#include<iostream>
using namespace std;
int main(){
    // int a,b,c,d,e;
    // cout<<"Enter marks of student 1: ";
    // cin>>a;
    // cout<<"Enter marks of student 2: ";
    // cin>>b;
    // cout<<"Enter marks of student 3: ";
    // cin>>c;
    // cout<<"Enter marks of student 4: ";
    // cin>>d;
    // cout<<"Enter marks of student 5: ";
    // cin>>e;
    // cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;

    int marks[5];
    for(int i=0;i<5;i++){//input
        cout<<"Enter marks of student "<<i+1<<": ";
        cin>>marks[i];
    }
    for(int i=0;i<5;i++){//output
        marks[i] = marks[i] + 2;
        cout<<marks[i]<<" ";
    }
    for(int i=0;i<5;i++){
        cout<<marks+i<<" ";
    }
    return 0;
}