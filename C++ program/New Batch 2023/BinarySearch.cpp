#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,12,12,43,65,87,90};
    int n = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = n-1;
    int mid;
    int key;
    cin>>key;
    int counter = 0;
    while(start<=end){
        cout<<++counter<<endl;
        mid = (start+end)/2;
        if(arr[mid]==key){
            cout<<"Found at index "<<mid<<endl;
            break;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    if(start>end){
        cout<<"Not found"<<endl;
    }
    return 0;
}