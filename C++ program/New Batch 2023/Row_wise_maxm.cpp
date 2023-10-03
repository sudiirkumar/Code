#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[4][3] = {
        {21,25,33},
        {13,48,91},
        {23,56,87},
        {65,98,76}};
    int maxm;
    int minm;
    for(int i=0;i<4;i++){
        maxm = INT_MIN;
        minm = INT_MAX;
        for(int j=0;j<3;j++){
            // if(maxm<arr[i][j]){
            //     maxm = arr[i][j];
            // }
            maxm = max(maxm,arr[i][j]);
            minm = min(minm,arr[i][j]);
        }
        cout<<"Maximum in row "<<i+1<<": "<<maxm<<endl;
        cout<<"Minimum in row "<<i+1<<": "<<minm<<endl;
    }
    return 0;
}