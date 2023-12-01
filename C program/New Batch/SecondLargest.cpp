#include<stdio.h>
#include<climits>
int main(){
    int arr[] = {2,15,17,3,17,14};
    int n = sizeof(arr)/sizeof(int);
    int maxm1 = INT_MIN;
    int maxm2 = INT_MIN;
    int maxm3 = INT_MIN;
    for(int i=0;i<n;i++){
        if(maxm1<arr[i]){
            maxm3 = maxm2;
            maxm2 = maxm1;
            maxm1 = arr[i];
        }
        else if(maxm2<arr[i] && arr[i]!=maxm1){
            maxm3 = maxm2;
            maxm2 = arr[i];
        }
        else if(maxm3<arr[i] && arr[i]!=maxm1 && arr[i]!=maxm2){
            maxm3 = arr[i];
        }
    }
    printf("Greatest number: %d",maxm1);
    printf("\nSecond Greatest number: %d",maxm2);
    printf("\nThird Greatest number: %d",maxm3);
    return 0;
}