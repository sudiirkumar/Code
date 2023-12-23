#include<iostream>
using namespace std;
int main(){
    // int marks1,marks2,marks3,marks4,marks5;
    // cout<<"Enter 5 marks: ";
    // cin>>marks1>>marks2>>marks3>>marks4>>marks5;
    // int total = marks1 + marks2 + marks3 + marks4 + marks5;
    // int avg = total/5;
    int marks[5];
    for(int i=0;i<5;i++){
        cout<<"Enter marks: ";
        cin>>marks[i];
    }
    int total = 0;
    for(int i=0;i<5;i++){
        total = total + marks[i];
    }
    int avg = total/5;
    cout<<"Total marks: "<<total<<endl;
    cout<<"Average marks: "<<avg<<endl;
    return 0;
}