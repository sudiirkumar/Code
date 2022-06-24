#include<iostream>
using namespace std;
void perm(string s,string ans){
    if(s.length()<=0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
        swap(s[0],s[i]);
        perm(s.substr(1,s.length()),ans+s[0]);
        swap(s[0],s[i]);
    }
}
int main(){
    string str;
    cin>>str;
    perm(str,"");
    return 0;
}