#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any character: ";
    cin>>ch;
    ch = tolower(ch);
    if(ch>='a' and ch<='z'){
        if(ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u'){
            cout<<"Vowel"<<endl;
        }
        else{
            cout<<"Consonant"<<endl;
        }
    }
    else if(ch>='0' and ch<='9'){
        cout<<"Digit"<<endl;
    }
    else{
        cout<<"Special characters"<<endl;
    }
    return 0;
}