#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5,10);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    for(int num : v){
        cout<<num<<" ";
    }
    cout<<endl;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.pop_back();
    cout<<v[3]<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    for(int num : v){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}