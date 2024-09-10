#include<iostream>
#include<vector>
using namespace std;
int main(){
    int num;
    cin>>num;
    while (num--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        string temp;
        for(int i=0;i<n;i++){
            cin>>temp;
            for(int j=0;j<4;j++){
                if(temp[j]=='#'){
                    v[i] = j+1;
                    break;
                }
            }
        }
        for(int i=n-1;i>=0;i--){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}