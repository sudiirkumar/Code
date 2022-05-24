#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> a={{21,34,3,12},{123,21,4},{123,4,21,1,3}};
    for (int i = 0; i < a.size(); i++)       
    {
        for(int x:a[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}