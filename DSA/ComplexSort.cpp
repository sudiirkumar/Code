#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int totalMarks(vector<int> marks){
    return marks[0]+marks[1]+marks[2];
}
bool helper(pair<string,vector<int>> s1,pair<string,vector<int>> s2){
    vector<int> marks1 = s1.second;
    vector<int> marks2 = s2.second;

    return totalMarks(marks1) > totalMarks(marks2); 
}
int main(){
    vector<pair<string,vector<int>>> s=
    {{"Sudhir",{12,53,23}},
    {"Aditya",{45,1,43}},
    {"Devraj",{34,12,23}},
    {"Shubham",{1,2,3}}};

    sort(s.begin(),s.end(),helper);

    for(int i=0;i<s.size();i++){
        cout<<s[i].first<<" "<<totalMarks(s[i].second)<<endl;
    }
}