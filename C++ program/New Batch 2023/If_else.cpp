#include<iostream>
using namespace std;
int main(){
    //Control structure -> if, if else, loop, switch case, ternary operator
    //Syntax : Rule to write program statement / Grammer for programming
    // cout<<PRINT SENTENCE
    // if(condition){

    //}
    int a;
    int b = 10;// Assignment operator
    cout<<"Enter a number: ";
    cin>>a;
    if(a>5){// a>b    a<b   a>=b  a<=b  a==b  a!=b
        cout<<a<<" is greater than 5"<<endl;
    }
    else{
        cout<<a<<" is less than or equal to 5"<<endl;
    }
    return 0;
}