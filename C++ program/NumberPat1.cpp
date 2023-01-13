#include<iostream>
using namespace std;
int main(){
    int num;//5
    cout<<"Enter a number: ";
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            if(i==(num+1)/2 && j==(num+1)/2){
                cout<<"0 ";
            }
            else{
                cout<<"1 ";
            }
        }
        cout<<endl;
    }
    return 0;
}