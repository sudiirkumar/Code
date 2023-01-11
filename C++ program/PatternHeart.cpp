#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    int n = 10;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=(2*i)+3;j++){
            cout<<"* ";
        }
        for(int j=1;j<=7-(2*i);j++){
            cout<<"  ";
        }
        for(int j=1;j<=(2*i)+3;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1;i<=10;i++){
        for(int j=1;j<=(2*n)-i;j++){
            if(i>j){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}