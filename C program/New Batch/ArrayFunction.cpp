#include<stdio.h>
int sum_of_values(int *p,int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        // sum += p[i];
        sum += *(p+i);
    }
    return sum;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    int ans = sum_of_values(arr,n);
    printf("%d",ans);
    return 0;
}