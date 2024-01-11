#include<stdio.h>
#include<math.h>
int main(){
    int arr[] = {127,5,31,123,1,57,98,12};
    int n = sizeof(arr)/sizeof(int);
    printf("\nPrime number are: \n");
    for(int j=0;j<n;j++){
        int i;
        for(i=2;i<=sqrt(arr[j]);i++){
            if(arr[j]%i==0){
                break;
            }
        }
        if(arr[j]!=1 && i>sqrt(arr[j])){
            printf("%d ",arr[j]);
        }
    }
    printf("\nPalindrome number are: \n");
    return 0;
}