#include<iostream>
using namespace std;
int binarySearch(int a[],int n,int key){
    if(key>a[n-1] || key<a[0]){
        return -1;
    }
    int left = 0;
    int right = n-1;
    int mid;
    while(left<=right){
        mid = (left+right)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
    return -1;
}
int main(){
    int a[] = {2,5,7,11,31,49,53,73};
    int n = sizeof(a)/sizeof(int);
    int key;
    cin>>key;
    int i = binarySearch(a,n,key);
    if(i==-1){
        cout<<key<<" is not found."<<endl;
    }
    else{
        cout<<key<<" is found at index "<<i<<endl;
    }
    return 0;
}