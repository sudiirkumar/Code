#include<stdio.h>
void print(int arr[],int n){
    printf("\nContents of Array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void input(int *p,int n){
    for(int i=0;i<n;i++){
        printf("Enter a value: ");
        scanf("%d",p+i);
    }
}
int main(){
    int a[5];
    input(a,5);
    print(a,5);
    return 0;
}