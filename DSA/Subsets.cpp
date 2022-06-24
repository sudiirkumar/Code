#include<iostream>
using namespace std;
void subSet(string s,string ans){
    if(s.length()<=0){
        cout<<ans<<endl;
        return;
    }
    char currentChar = s[0];
    s = s.substr(1,s.length());
    subSet(s,ans+currentChar);
    subSet(s,ans);
}
int main(){
    string inp;
    cin>>inp;
    subSet(inp,"");
    return 0;
}