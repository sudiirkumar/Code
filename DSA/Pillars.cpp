#include<iostream>
using namespace std;
int lowestDiff(int a[],int n,int k){
    a[0] += k;
    a[n-1] -= k;
    for(int i=1;i<n-1;i++){
        if(a[i]-k<a[0] and a[i]-k>=0 and a[i]+k>a[n-1]){
                int diff1 = a[0] - a[i] + k;
                int diff2 = a[i] + k - a[n-1];
                if(diff1<diff2){
                    a[i] -= k;
                    a[0] = a[i];
                } 
                else{
                    a[i] += k;
                    a[n-1] = a[i];
                }
            }
        else{
            if(a[i]+k<a[n-1])
                a[i] += k;
            else if(a[i]-k>a[0])    
                a[i] -= k;
        }
    }
    return a[n-1] - a[0];
}
int main(){
    int arr[10];
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<lowestDiff(arr,n,k);
    return 0;
}