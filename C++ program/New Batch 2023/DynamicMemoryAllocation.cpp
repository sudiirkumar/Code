#include<iostream>
using namespace std;
int main(){
    int *a = new int;
    int *arr = new int[10];
    cout<<arr<<endl;
    *a = 10;
    for(int i=0;i<10;i++){
        arr[i] = i+1;
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<a<<endl;
    cout<<*a<<endl;
    delete[] arr;
    delete a;
    return 0;
}