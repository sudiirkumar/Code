#include<iostream>
using namespace std;
int main(){
    //declaration
    int a[10];
    //input
    for(int i=0;i<10;i++){
        cout<<"Enter a number: ";
        cin>>a[i];
    }
    //output
    cout<<"Array contains: \n";
    for(int i=0;i<10;i++){
        if(a[i]%2==0){
            cout<<a[i]<<" ";
        }
    }
    int sum=0;
    for(int i=0;i<10;i++){
        sum = sum + a[i];
    }
    cout<<"Sum: "<<sum<<endl;
    return 0;
}