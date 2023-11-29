#include<stdio.h>
int main(){
    int arr[] = {12,56,56,3,21,3,23,4,24,23,1,23,12,21,34,23,42,34,67,2,34,21,34,56,2,34,43};
    int n = sizeof(arr)/sizeof(int);
    printf("\nEven elements: \n");
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            printf("%d ",arr[i]);
        }
    }
    printf("\nOdd elements: \n");
    for(int i=0;i<n;i++){
        if(arr[i]%2==1){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}