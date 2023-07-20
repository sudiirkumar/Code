#include<stdio.h>
int main(){
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int curr_sum = 0;
    for(int i=0;i<n;i++){
        curr_sum += arr[i];
        printf("%d ",curr_sum/(i+1));
    }
    return 0;
}