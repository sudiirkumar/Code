#include<stdio.h>
int main(){
    int a[100];
    int n;
    printf("Enter a number of values: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nElements before sorting: \n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<=i;j++){
            if(a[j]<a[j+1]){
                int t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    printf("\nElements after sorting: \n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}