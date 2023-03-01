#include<iostream>
using namespace std;
int main(){
    int a[20][20],b[20][20];
    int row,col;
    cout<<"Enter row and column: ";
    cin>>row>>col;
    cout<<"First matrix: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Enter a number: ";
            cin>>a[i][j];
        }
    }
    cout<<"Second matrix: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Enter a number: ";
            cin>>b[i][j];
        }
    }
    cout<<"Sum of two matrix is: "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            b[i][j] = a[i][j] + b[i][j];
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}