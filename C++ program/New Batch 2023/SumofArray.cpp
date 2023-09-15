#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int arr[] = {12,3,3,3,5,3,1,2};
    for(int n : arr){
        sum += n;
    }
    cout<<sum<<endl;
    return 0;
}