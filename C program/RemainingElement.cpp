#include<stdio.h>
int main(){
    int arr[] = {12,34,56,64,78,96,99};    // Even number of elements = (n/2) -1; Odd = (n/2)
    int n = sizeof(arr)/sizeof(arr[0]);
    if(n%2==1){
        printf("%d",arr[(n/2)]);
    }
    else{
        printf("%d",arr[(n/2)-1]);
    }
    return 0;
}