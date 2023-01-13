#include<iostream>
using namespace std;
int main(){
    int num;//5
    cout<<"Enter a number: ";
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            cout<<j+i-1<<" ";
        }
        cout<<endl;
    }
    return 0;
}