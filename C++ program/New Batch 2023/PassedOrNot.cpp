#include<iostream>
using namespace std;
int main(){
    int marks1;
    int marks2;
    int marks3;
    int marks4;
    int marks5;
    cout<<"Enter marks of 5 subjects: ";
    cin>>marks1>>marks2>>marks3>>marks4>>marks5;
    int total = marks1 + marks2 + marks3 + marks4 + marks5;
    int perc = (total*100)/500;
    cout<<((perc>=33)?"Passed":"Failed")<<endl;
    return 0;
}