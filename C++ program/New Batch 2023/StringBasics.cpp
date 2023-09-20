#include<iostream>
using namespace std;
int main(){
    string name;
    cin>>name;
    cout<<name<<endl;
    // for(int i=0;i<name.length();i++){
    //     cout<<name[i]<<"\n";
    // }
    for(auto c : name){
        cout<<c<<"\n";
    }
    return 0;
}