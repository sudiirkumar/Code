#include<stdio.h>
int main(){
    int arr[] = {-2,5,0,95,1,30,124,123,31};
    int n = sizeof(arr)/sizeof(int);
    printf("Before sorting: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<=n-2;i++){
        for(int j=0;j<=n-i-2;j++){
            if(arr[j]>arr[j+1]){
                printf("\nSwapping %d and %d",arr[j],arr[j+1]);
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\nAfter sorting: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}