#include<stdio.h>
#include<climits>
int main(){
    int arr[10];//Array declaration
    for(int i=0;i<10;i++){//input
        printf("Enter a value: ");
        scanf("%d",&arr[i]);
    }
    printf("\nArray contains: \n");
    for(int i=0;i<10;i++){//Output
        printf("%d ",arr[i]);
    }
    //Total sum
    int sum = 0;
    for(int i=0;i<10;i++){
        sum += arr[i];
    }
    printf("\nTotal sum: %d",sum);
    printf("\nAverage: %.2f",sum/10.0);

    //Min Max value
    int minm = INT_MAX;
    int maxm = INT_MIN;
    for(int i=0;i<10;i++){
        if(maxm<arr[i]){
            maxm = arr[i];
        }
        if(minm>arr[i]){
            minm = arr[i];
        }
    }
    printf("\nMaxm value: %d\nMinm value: %d",maxm,minm);
    return 0;
}