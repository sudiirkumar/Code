#include<iostream>
using namespace std;
bool match(int a[],int n,int k){
    for(int i=0;i<n;i++){
        if(a[i]==k){
            return true;
        }
    }
    return false;
}
int main(){
    int a[] = {1,2,354,6,4,3,5,7,9,11,56};
    int n = sizeof(a)/sizeof(a[0]);
    int key;
    cout<<"Enter a value to search: ";
    cin>>key;
    // bool isFound = false;
    // for(int i=0;i<n;i++){
    //     if(a[i]==key){
    //         isFound = true;
    //         break;
    //     }
    // }
    bool isFound = match(a,n,key);
    if(isFound){
        cout<<"Found";
    }
    else{
        cout<<"Not found";
    }
    return 0;
}