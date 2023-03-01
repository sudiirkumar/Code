#include<iostream>
using namespace std;
int main(){
    int a[2][2] = {{1,2},{3,4}};
    int b[2][2] = {{4,5},{6,7}};
    int row=2,col=2;
    
    // cout<<"Enter row and column: ";
    // cin>>row>>col;
    // cout<<"Input first matrix: "<<endl;
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<"Enter element ("<<i+1<<","<<j+1<<"): ";
    //         cin>>a[i][j];
    //     }
    // }
    // cout<<"Input second matrix: "<<endl;
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<"Enter element ("<<i+1<<","<<j+1<<"): ";
    //         cin>>b[i][j];
    //     }
    // }
    int c[20][20];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    cout<<"Result: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}