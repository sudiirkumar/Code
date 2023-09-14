#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    //Hollow rhombus
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n-1;j++){
            if(i+j==n-1 or i+j==2*n-2){
                cout<<"* ";
            }
            else if(i==0 and i+j>=n-1){
                cout<<"* ";
            }
            else if(i==n-1 and i+j<=2*n-2){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
    cout<<"\n\n\n";
    //Solid rhombus
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}