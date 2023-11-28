#include<stdio.h>
int main(){
    int arr[] = {12,45,-87,90,-2,0,14,-34,76,13,45,78,-89};
    int n = sizeof(arr)/sizeof(int);
    int count_neg = 0;
    printf("\nNegative numbers: \n");
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            printf("%d ",arr[i]);
            count_neg++;
        }
    }
    printf("\nCount of negative numbers: %d",count_neg);
    int count_pos = 0;
    printf("\nPositive numbers: \n");
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            count_pos++;
            printf("%d ",arr[i]);
        }
    }
    printf("\nCount of positive numbers: %d",count_pos);
    return 0;
}