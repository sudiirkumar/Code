#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    cout<<&v[0]<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(2);
    cout<<&v[0]<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(4);
    v.push_back(5);
    v.push_back(5);
    // v.pop_back();
    v.push_back(6);
    cout<<&v[0]<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    for(int num : v){//for each
        cout<<num<<" ";
    }
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}