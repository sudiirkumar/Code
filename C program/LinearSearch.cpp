#include<stdio.h>
#include<climits>
int linearSearch(int a[],int n,int key){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return i;
        }
    }
    return -1;
}
int print2largest(int arr[],int n){
    int maxm = INT_MIN;
    int second_maxm = INT_MIN;
    for(int i=0;i<n;i++){
        if(maxm<arr[i]){
            second_maxm = maxm;
            maxm = arr[i];
        }
        else if(second_maxm<arr[i] && arr[i]!=maxm){
            second_maxm = arr[i];
        }
    }
    return second_maxm;
}
int main(){
    int arr[] = {12,23,45,2,8,34,565,34,-1,-10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 18;
    int idx = linearSearch(arr,n,key);
    printf("%d",idx);
    return 0;
}