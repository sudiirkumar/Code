#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    // for(int i=0;i<num;i++){
    //     for(int j=0;j<=i;j++){
    //         if(i==num-1 or j==0 or j==i){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }
    for(int i=0;i<num;i++){
        for(int j=0;j<num-i;j++){
            if(i==0 or j==0 or j==num-i-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}