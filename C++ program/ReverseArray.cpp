#include<iostream>
#include<algorithm>
using namespace std;
void reverseArr(int a[],int n){
    int i = 0;
    int j = n-1;
    while(i<j){
        // int t = a[i];
        // a[i] = a[j];
        // a[j] = t;
        swap(a[i],a[j]);
        i++;
        j--;
    }
}
int main(){
    int a[] = {2,4,1,-3,5,7,10,13};
    int n = sizeof(a)/sizeof(int);
    cout<<"Before reverse: "<<endl;
    for(int x : a){
        cout<<x<<" ";
    }
    reverse(a,a+n);
    cout<<endl<<"After reverse: "<<endl;
    for(int x : a){
        cout<<x<<" ";
    }
    return 0;
}