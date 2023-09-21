#include<iostream>
using namespace std;
char toUpper(char c){
    if(c>='a' and c<='z'){
        return char('A' + c - 'a');
    }
    return c;
}
char toLower(char c){
    if(c>='A' and c<='Z'){
        return char('a' + c - 'A');
    }
    return c;
}
bool isUpper(char c){
    return (c>='A' and c<='Z');
}
bool isLower(char c){
    return (c>='a' and c<='z');
}
int main(){
    string name;
    cin>>name;
    cout<<name<<endl;
    for(auto c : name){
        cout<<toLower(c);
    }
    cout<<endl;
    for(auto c : name){
        cout<<toUpper(c);
    }
    cout<<endl;
    for(auto c : name){
        if(isUpper(c)){
            cout<<toLower(c);
        }
        else{
            cout<<toUpper(c);
        }
    }
    return 0;
}