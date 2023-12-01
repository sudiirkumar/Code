#include<stdio.h>
int main(){
    int arr[100];
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter a number: ");
        scanf("%d",&arr[i]);
    }
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