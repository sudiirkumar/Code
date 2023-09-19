#include<iostream>
using namespace std;
int main(){
    int arr[] = {12,-3,-5,34,0,-4,45,10};
    int n = sizeof(arr)/sizeof(int);
    int count=0;
    cout<<"Negative elements are: \n";
    for(int num : arr){
        if(num<0){
            count++;
            cout<<num<<" ";
        }
    }
    cout<<"\nNumber of negative elements: "<<count<<endl;
    return 0;
}