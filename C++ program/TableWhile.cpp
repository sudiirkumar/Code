#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    // int i=1;
    // while(i<=10){
    //     cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    //     i++;
    // }
    for(int i=1;i<=10;i++){
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    }
    return 0;
}