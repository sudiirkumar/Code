#include<iostream>
using namespace std;
int** array(int row,int col){
    int ** a = new int* [row];

    for(int i=0;i<row;i++){
        a[i] = new int[col];
    }
    int value=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            a[i][j]=++value;
        }
    }
    return a;
}
int main(){
    int row,col;
    cin>>row>>col;

    int **a = array(row,col);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}