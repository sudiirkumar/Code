#include<iostream>
using namespace std;
int linearSearch(int a[],int n,int k){
    for(int i=0;i<n;i++){
        if(a[i]==k){
            return i;
        }
    }
    return -1;
}
int main(){
    int a[] = {1,2,354,6,4,3,5,7,9,11,56};
    int n = sizeof(a)/sizeof(a[0]);
    int key;
    cout<<"Enter a value to search: ";
    cin>>key;
    int result = linearSearch(a,n,key);
    if(result==-1){
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"Found at index "<<result<<endl;
    }
    return 0;
}