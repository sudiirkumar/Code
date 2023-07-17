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
void printReverse(int arr[],int n){
    printf("\nArray in reverse order: \n");
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
}
void reverse(int arr[],int n){
    int temp[n];
    int j=0;
    for(int i=n-1;i>=0;i--){
        temp[j++] = arr[i];
    }
    //overwriting original array
    for(int i=0;i<n;i++){
        arr[i] = temp[i];
    }
}
void reverse2(int arr[],int n){
    for(int i=0;i<=n/2;i++){
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
}
int countNegative(int arr[],int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            count++;
        }
    }
    return count;
}
int main(){
    int arr[] = {12,-23,45,2,-8,34,565,34,-1,-10};
    int n = sizeof(arr)/sizeof(arr[0]);
    // printf("%d",print2largest(arr,n));
    // printReverse(arr,n);
    // printf("\nValues before reverse: \n");
    // for(int i=0;i<n;i++){
    //     printf("%d ",arr[i]);
    // }
    // reverse2(arr,n);
    // printf("\nValues after reverse: \n");
    // for(int i=0;i<n;i++){
    //     printf("%d ",arr[i]);
    // }
    printf("%d ",countNegative(arr,n));
    return 0;
}