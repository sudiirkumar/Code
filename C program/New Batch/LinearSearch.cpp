#include<stdio.h>
int main(){
    int arr[10] = {-2,5,15,3,90,8,-45,0,23,12};
    int key;
    printf("Enter a key to search: ");
    scanf("%d",&key);
    int i;
    for(i=0;i<10;i++){
        if(arr[i]==key){
            printf("Found at index %d",i);
            break;
        }
    }
    if(i>9){
        printf("Not found");
    }
    return 0;
}