#include<stdio.h>
#include"aci.h"
int main(){
    //reverse
    int n=153;
    int rev = reverse(n);
    printf("\n%d\n",rev);
    //prime
    int a = 20;
    if(isPrime(a)){
        printf("%d is prime\n",a);
    }
    else{
        printf("%d is not prime\n",a);
    }
    //max/min between 2 numbers
    printf("%d is maxm between %d and %d\n",max(a,n),a,n);
    printf("%d is minm between %d and %d\n",min(a,n),a,n);
    //maxm between 3 nums
    int b=11;
    printf("%d is greatest\n",max(n,max(a,b)));
    //armstrong
    if(isArmstrong(n)){
        printf("%d is armstrong\n",n);
    }
    else{
        printf("%d is not armstrong\n",n);
    }
    //factorial
    printf("Factorial of %d is %d\n",b,factorial(b));
    //strong number
    if(isStrong(b)){
        printf("%d is Strong number\n",b);
    }
    else{
        printf("%d is not strong number\n",b);
    }
    return 0;
}