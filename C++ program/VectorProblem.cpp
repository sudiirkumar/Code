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
    vector<int> nums = {1,2,3,4,5,6,7,8,9,12,3,1,21,34,3,23,3,34,124,434,5345,2,5,245};
    for(int x : nums){
        cout<<x<<" ";
    }
    cout<<endl;
    for(int x : even(nums)){
        cout<<x<< " ";
    }
    return 0;
}