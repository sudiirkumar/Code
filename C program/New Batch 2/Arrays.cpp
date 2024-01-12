#include<stdio.h>
#include<math.h>
int main(){
    int arr[] = {127,5,31,121,1,57,98,12};
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
    for(int i=0;i<n;i++){
        int temp = arr[i];
        int lastDig;
        int rev = 0;
        while(temp>0){
            lastDig = temp%10;
            temp /= 10;
            rev = rev*10 + lastDig;
        }
        if(rev==arr[i]){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}