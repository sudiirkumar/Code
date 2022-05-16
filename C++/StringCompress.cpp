#include<iostream>
#include<cstring>
using namespace std;
string compressString(string s){
    string new_str="";
    char last=s[0];
    int curr=0;
    for(char x : s){
        if(x==last){
            curr++;
        }
        else{
            new_str = new_str + last;
            new_str = new_str + to_string(curr);
            curr = 1;
        }
        last=x;
    }
    new_str = new_str + last;
    new_str = new_str + to_string(curr);

    if(new_str.length()>s.length())
        return s;
    return new_str;
}
int main(){
    string s1,s2;
    getline(cin,s1);
    cout<<compressString(s1)<<endl;

    getline(cin,s2);
    cout<<compressString(s2)<<endl;
    return 0;
}