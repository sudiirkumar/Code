#include<iostream>
using namespace std;
bool isIdentity(int arr[][100],int row,int col){
    if(row==col){
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(i==j){
                    if(arr[i][j]!=1){
                        return false;
                    }
                }
                else{
                    if(arr[i][j]!=0){
                        return false;
                    }
                }
            }
        }
        return true;
    }
    return false;
}
bool isScalar(int arr[][100],int row,int col){
    if(row==col){
        int val = arr[0][0];
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(i==j){
                    if(arr[i][j]!=val){
                        return false;
                    }
                }
                else{
                    if(arr[i][j]!=0){
                        return false;
                    }
                }
            }
        }
        return true;
    }
    return false;
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
    //check if identity matrix or not
    cout<<(isIdentity(arr,row,col)?"Identity matrix":"Non identity matrix")<<endl;
    // if(isIdentity(arr,row,col)){
    //     cout<<"Identity matrix"<<endl;
    // }
    // else{
    //     cout<<"Non identity matrix"<<endl;
    // }
    cout<<(isScalar(arr,row,col)?"Scalar matrix":"Non scalar matrix")<<endl;
    return 0;
}