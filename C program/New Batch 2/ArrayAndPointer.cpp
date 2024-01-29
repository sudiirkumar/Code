#include<stdio.h>
void increment(int *a,int n){
    for(int i=0;i<n;i++){
        a[i]++;
    }
}
int main(){
    int arr[5];
    int *p = arr;
    // printf("%d\n",arr);
    // printf("%d\n",&arr[0]);
    // printf("%d\n",arr[2]);
    // printf("%d\n",*(arr+2));
    for(int i=0;i<5;i++){
        printf("Enter a value: ");
        // scanf("%d",&arr[i]);
        scanf("%d",p+i);
    }
    increment(arr,5);
    printf("\nContents of array: \n");
    for(int i=0;i<5;i++){
        // printf("%d ",arr[i]);
        printf("%d ",*(arr+i));
    }
    return 0;
}