#include<iostream>
#include<vector>
using namespace std;
vector<int> even(vector<int> nums){
    vector<int> ans;
    for(int x : nums){
        if(x%2==0){
            ans.push_back(x);
        }
    }
    return ans;
}
int main(){
    vector<int> nums;
    int n;
    for(int i = 0;i<10;i++){
        cout<<"Enter a number: ";
        cin>>n;
        nums.push_back(n);
    }
    for(int x : nums){
        cout<<x<<" ";
    }
    cout<<endl;
    for(int x : even(nums)){
        cout<<x<< " ";
    }
    return 0;
}