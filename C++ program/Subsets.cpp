#include<iostream>
using namespace std;
void subset(string s,string ans){
    //base case
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    //recursive case
    char currChar = s[0];
    string remainingStr = s.substr(1);
    subset(remainingStr,ans+currChar);
    subset(remainingStr,ans);
}
int main(){
    string s;
    cin>>s;
    subset(s,"");
    return 0;
}