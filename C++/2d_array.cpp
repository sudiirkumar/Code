#include<iostream>
using namespace std;
void input(int a[][100],int r, int c){
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>a[i][j];
}
void print(int a[][100],int r, int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
int main(){
    int arr[100][100];
    int r,c;

    cin>>r>>c;
    input(arr,r,c);
    print(arr,r,c);

    return 0;
}