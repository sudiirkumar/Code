#include<iostream>
using namespace std;
int main(){
    int a[] = {19,17,-4,5,13};
    int n = sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum = 0;
            for(int k=i;k<=j;k++){
                // cout<<a[k]<<" ";
                sum += a[k];
            }
            cout<<endl<<"Sum: "<<sum<<endl;
        }
        cout<<endl;
    }
    return 0;
}