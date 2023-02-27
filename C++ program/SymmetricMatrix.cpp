#include<iostream>
using namespace std;
bool isSymmetric(int a[][100],int row,int col){
    //method 1
    // int b[100][100];
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         b[j][i] = a[i][j];
    //     }
    // }
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<b[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(a[i][j]!=a[j][i]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    int row;
    int col;
    //declaration
    int arr[100][100];
    cout<<"Enter row and column: ";
    cin>>row>>col;
    //input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Enter a number: ";
            cin>>arr[i][j];
        }
    }
    //output
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<(isSymmetric(arr,row,col)?"Symmetric":"Non symmetric")<<endl;
    return 0;
}