#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,4,3,2,1,3,4,4};
    int x = 0;
    for(int num : arr){
        x = x^num;
    }
    cout<<x<<endl;
    return 0;
}