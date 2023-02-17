#include<bits/stdc++.h>
using namespace std;
// bool compare(int a,int b){
//     if(a>b){
//         return true;
//     }
//     return false;
// }
int main(){
    int a[] = {12,-12,423,12,23,13,24,12,34,32,423,-1,324,123,4,321,-4,214,3,34,3,-32};
    int n = sizeof(a)/sizeof(int);
    cout<<"Before sorting: "<<endl;
    for(int x : a){
        cout<<x<<" ";
    }
    cout<<endl<<"After sorting: "<<endl;
    sort(a,a+n,greater<int>());//O(NlogN)  
    // reverse(a,a+n);//O(N)
    for(int x : a){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}