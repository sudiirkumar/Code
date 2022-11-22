//check if a number is negative then print its square otherwise print the number itself.
#include<stdio.h>
#include"aci.h"
int main(){
    int n;
    for(int i=0;i<10;i++){
        printf("\nEnter a value: ");
        scanf("%d",&n);
        if(isPositive(n)){
            printf("%d",n);
        }
        else{
            printf("%d",square(n));
        }
    }
    return 0;
}
