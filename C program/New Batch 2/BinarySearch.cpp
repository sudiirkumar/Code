#include<stdio.h>
int main(){
    int arr[] = {-2,3,3,4,7,15};
    int n = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = n-1;
    int mid;
    int key;
    printf("Enter a key to find: ");
    scanf("%d",&key);
    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid]==key){
            printf("Found at %d",mid);
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
        printf("Not found");
    }
    return 0;
}