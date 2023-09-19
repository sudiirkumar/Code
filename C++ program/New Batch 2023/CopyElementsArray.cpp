#include<iostream>
using namespace std;
int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,0};
    int b[10];
    for(int i=0;i<10;i++){
        b[i] = a[i];
    }
    cout<<"Content of original array: \n";
    for(int num : a){
        cout<<num<<" ";
    }
    cout<<"\nContent of copy of array: \n";
    for(int num : b){
        cout<<num<<" ";
    }
    return 0;
}