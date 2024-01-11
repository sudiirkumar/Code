#include<stdio.h>
int main(){
    int arr[] = {1,5,3,-2,4,3};
    int n = sizeof(arr)/sizeof(int);
    int key;
    printf("Enter a key to find: ");
    scanf("%d",&key);
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==key){
            printf("Found at %d",i);
            break;
        }
    }
    if(i==n){
        printf("Not found");
    }
    return 0;
}