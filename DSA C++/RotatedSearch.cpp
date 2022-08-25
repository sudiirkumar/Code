#include<iostream>
#include<vector>
using namespace std;
int rotatedSearch(vector<int> a,int key){
    int s = 0;
    int e = a.size()-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(a[mid]==key){
            return mid;
        }
        if(a[mid]>=a[s]){
            if(key>=a[s] && key<=a[mid]){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        else{
           if(key>=a[mid] && key<=a[e]){
                s = mid+1;
            }
            else{
                e = mid-1;
            } 
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {9,11,12,2,3,5,6};
    int key;
    cin>>key;
    cout<<rotatedSearch(arr,key)<<endl;
    return 0;
}