#include<stdio.h>
int reverse(int n){
    int rev = 0;
    while(n!=0){
        rev = rev*10 + (n%10);
        n /= 10;
    }
    return rev;
}
int isPalindrome(int n){
    if(n==reverse(n)){
        return 1;
    }
    return 0;
}
int isPalindromeArray(int arr[],int n){
    for(int i=0;i<n;i++){
        if(!isPalindrome(arr[i])){
            return 0;
        }
    }
    return 1;
}
int main(){
    int arr[] = {111,121,454,777,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    if(isPalindromeArray(arr,n)){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}