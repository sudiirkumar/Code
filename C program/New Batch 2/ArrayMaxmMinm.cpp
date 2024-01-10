#include<stdio.h>
int main(){
    int a[] = {12,432,12,312,0,24,3,-847,2,123,123,-435,432};
    int n = sizeof(a)/sizeof(int);
    int maxm,minm;
    int maxm2;
    maxm2 = maxm = minm = a[0];
    for(int i=0;i<n;i++){
        if(maxm<a[i]){
            maxm2 = maxm;
            maxm = a[i];
        }
        else if(maxm2<a[i] && maxm!=a[i]){
            maxm2 = a[i];
        }
        if(minm>a[i]){
            minm = a[i];
        }
    }
    printf("\nMaxm value: %d",maxm);
    printf("\nMinm value: %d",minm);
    printf("\nSecond Maxm value: %d",maxm2);
    return 0;
}