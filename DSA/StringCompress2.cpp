#include<iostream>
#include<cstring>
#include<string>
using namespace std;
string stringCompress(string s){
    string new_str;
    int count;

    for(int i=0;i<s.length();i++){
        count = 1;

        while(s[i+1]==s[i] and i<s.length()-1){
            count++;
            i++;
        }
        new_str += s[i];
        new_str += to_string(count);
    }
    if(new_str.length()>s.length())
        return s;
    return new_str;
}
int main(){
    string s1,s2;
    getline(cin,s1);
    cout<<stringCompress(s1)<<endl;

    getline(cin,s2);
    cout<<stringCompress(s2)<<endl;
    return 0;
}