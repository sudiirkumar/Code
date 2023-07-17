#include<stdio.h>
int main(){
    int arr[5] = {5,9,12,1,-2};
    // int *p = &arr[0];
    printf("%d\n",arr);
    for(int i=0;i<5;i++){
        // printf("%d ",arr[i]);
        printf("%d ",*(arr+i));
    }
    return 0;
}