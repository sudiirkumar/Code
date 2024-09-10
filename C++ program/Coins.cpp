#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of trials: ";
    cin>>n;
    vector<string> v;
    vector<string> temp;
    temp.push_back("H");
    temp.push_back("T");
    for(int i=0;i<n-1;i++){
        for(string s: temp){
            v.push_back(s);
        }
    }
    return 0;
}