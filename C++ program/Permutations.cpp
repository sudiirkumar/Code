#include<iostream>
using namespace std;
void perm(string s,string ans){
    //base case
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    //recursive case
    for(int i=0;i<s.length();i++){
        swap(s[0],s[i]);
        perm(s.substr(1),ans+s[0]);
        swap(s[0],s[i]);
    }
}
int main(){
    string s;
    cin>>s;
    perm(s,"");
    return 0;
}