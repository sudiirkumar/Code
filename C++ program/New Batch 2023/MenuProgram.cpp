// Create a CPP program with a menu to calculate the following:
// 1. Check even or odd number
// 2. Check positive or negative or zero value
// 3. Check if a year is leap year or not.
#include<iostream>
using namespace std;
int main(){
    int ch;
    int n;
    cout<<"\n1. Check even or odd number";
    cout<<"\n2. Check positive, negative or zero value";
    cout<<"\n3. Check if a year is leap year or not";
    cout<<"\n\nEnter your choice: ";
    cin>>ch;
    switch (ch)
    {
    case 1:
        cout<<"Enter a number: ";
        cin>>n;
        cout<<(n%2==0?"Even number":"Odd number")<<endl;
        break;
    case 2:
        cout<<"Enter a number: ";
        cin>>n;
        cout<<(n>0?"Positive number":n<0?"Negative number":"Zero")<<endl;
        break;
    case 3:
        cout<<"Enter a year: ";
        cin>>n;
        if(n%400==0 || (n%4==0 && n%100!=0)){
            cout<<"Leap year"<<endl;
        }
        else{
            cout<<"Non leap year"<<endl;
        }
    default:
        break;
    }
    return 0;
}