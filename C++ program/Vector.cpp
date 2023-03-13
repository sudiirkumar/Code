#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    for(int x : vec){
        cout<<x<<" ";
    }
    cout<<endl;
    // cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    vec.push_back(3);
    cout<<vec.capacity()<<endl;
    vec.push_back(4);
    vec.push_back(5);
    cout<<vec.capacity()<<endl;
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);
    vec.pop_back();
    vec.pop_back();
    for(int x : vec){
        cout<<x<<" "; 
    }
    cout<<endl;
    cout<<vec.size()<<endl;
    vec.pop_back();
    vec.pop_back();
    for(int x : vec){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<vec.capacity()<<endl;
    for(int i=0;i<vec.size();i++){
        vec[i]++;
        cout<<vec[i]<<" ";
    }
    return 0;
}