#include<stdio.h>
int main(){
    int arr[] = {-2,-5,4,8,23,27,48};
    int n = sizeof(arr)/sizeof(int);
    int key;
    printf("Enter key to find: ");
    scanf("%d",&key);
    int mid;
    int l = 0;
    int r = n-1;
    while(l<=r){
        mid = (l+r)/2;
        if(arr[mid]==key){
            printf("Found at %d",mid);
            return 0;
        }
        if(arr[mid]>key){
            r = mid-1;
        }
        if(arr[mid]<key){
            l = mid+1;
        }
    }
    printf("Not found");
    return 0;
}