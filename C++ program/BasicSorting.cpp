#include<iostream>
using namespace std;
void bubbleSort(int a[],int n){
    if(n==1 || n==0){
        return;
    }
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<=i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}
void selectionSort(int a[],int n){
    if(n==1 || n==0){
        return;
    }
    int min_pos = 0;
    for(int i=0;i<=n-2;i++){
        min_pos = i;
        for(int j=i+1;j<n;j++){
            if(a[min_pos]>a[j]){
                min_pos = j;
            }
        }
        swap(a[i],a[min_pos]);
    }
}
int main(){
    int a[] = {12,-2,42,21,-123,5,0,2};
    int n = sizeof(a)/sizeof(int);
    for(int num : a){
        cout<<num<<" ";
    }
    cout<<endl;
    // bubbleSort(a,n);
    selectionSort(a,n);
    for(int num : a){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}