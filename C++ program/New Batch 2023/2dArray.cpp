#include<iostream>
using namespace std;
int main(){
    int a[4][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {1,2,3}
        };
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<"Enter a number ("<<i<<","<<j<<"): "; //Enter a number (0,0):
    //         cin>>a[i][j];
    //     }
    // }
    int sum = 0;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
            sum += a[i][j];
        }
        cout<<"\n";
    }
    cout<<"Sum: "<<sum<<endl;
    return 0;
}